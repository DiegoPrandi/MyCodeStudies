import mysql.connector
import os
import re
import getpass
from dotenv import load_dotenv

load_dotenv()

conexao = mysql.connector.connect(
    host = os.getenv("DB_HOST"),
    user = os.getenv("DB_USER"),
    password = os.getenv("DB_PASSWORD"),
    database = os.getenv("DB_NAME")
)

cursor  = conexao.cursor()

def validarEmail(email):
    padrao = r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'
    if re.match(padrao, email):
        return True
    else:
        return False   
    
def criptografarSenha(senha):
    chave = 7 
    senhaCripto = ''
    for letra in senha:
        valor = ord(letra) + chave
        senhaCripto += chr(valor)
    
    senha = senhaCripto
    return senha

def createAccount():
    os.system('cls')
    print('''   ___     _                              _        
  / __\ __(_) __ _ _ __    ___ ___  _ __ | |_ __ _ 
 / / | '__| |/ _` | '__|  / __/ _ \| '_ \| __/ _` |
/ /__| |  | | (_| | |    | (_| (_) | | | | || (_| |
\____/_|  |_|\__,_|_|     \___\___/|_| |_|\__\__,_|
                                                   ''')
    nome = input('Nome: ')
    email = input('Email: ')
    while validarEmail(email) == False:
        print('Digite um email válido')
        email = input('Email: ')
    senha = getpass.getpass('Senha: ')
    senha = criptografarSenha(senha)
    
    sql = 'INSERT INTO usuarios (nome, email, senha) VALUES(%s, %s, %s)'
    values  = nome, email, senha
    
    try:
        cursor.execute(sql, values)
        conexao.commit()
        os.system('cls')
        print('Usuario criado com sucesso')
        print('Pressione enter pra continuar...')
        input('')
        
    except mysql.connector.Error as erro:
        print('Erro:', erro)
        input('')

def listUsers():
    os.system('cls')
    sql = 'SELECT * FROM usuarios'
    cursor.execute(sql)
    usuarios = cursor.fetchall()
    
    print('''                                                          
,--. ,--.                              ,--.               
|  | |  | ,---. ,--.,--. ,--,--.,--.--.`--' ,---.  ,---.  
|  | |  |(  .-' |  ||  |' ,-.  ||  .--',--.| .-. |(  .-'  
'  '-'  '.-'  `)'  ''  '\ '-'  ||  |   |  |' '-' '.-'  `) 
 `-----' `----'  `----'  `--`--'`--'   `--' `---' `----'  
                                                          ''')
    print("=" * 110)
    print(f"{'ID':<5} | {'Nome':<20} | {'Email':<25} | {'Senha':<20} | {'Criado Em'}")
    print("=" * 110)
    
    if not usuarios:
        print("Nenhum usuário encontrado.")
    else:
        for i in usuarios:
            if len(i) >= 5:
                data_formatada = i[4].strftime('%d/%m/%Y %H:%M:%S') if hasattr(i[4], 'strftime') else str(i[4])
                print(f"{str(i[0]):<5} | {str(i[1]):<20} | {str(i[2]):<25} | {str(i[3]):<20} | {data_formatada}")
            elif len(i) >= 4:
                print(f"{str(i[0]):<5} | {str(i[1]):<20} | {str(i[2]):<25} | {str(i[3])}")
            else:
                print(i)
                
    print("=" * 110)
    print('\nPressione enter para voltar...')
    input('')
    main()

def main():
    while True:
        os.system('cls')
        print('''                                                                                    
    ,--.                 ,--.             ,---.                 ,--.                    
    |  |    ,---.  ,---. `--',--,--,     '   .-',--. ,--.,---.,-'  '-. ,---. ,--,--,--. 
    |  |   | .-. || .-. |,--.|      \    `.  `-. \  '  /(  .-''-.  .-'| .-. :|        | 
    |  '--.' '-' '' '-' '|  ||  ||  |    .-'    | \   ' .-'  `) |  |  \   --.|  |  |  | 
    `-----' `---' .`-  / `--'`--''--'    `-----'.-'  /  `----'  `--'   `----'`--`--`--' 
                `---'                         `---'                                   ''')
        print('''
            1 - Criar conta
            2 - Login
            3 - Listar usuários
            4 - Deletar usuário
            0 - Sair
            ''')
        
        op = int(input('Digite oq deseja fazer: '))
        
        match op:
            case 1:
                createAccount()
            case 2:
                login()
            case 3:
                listUsers()
            case 4:
                deleteUser()
            case 5:
                print('Até mais...')
                break        

main()