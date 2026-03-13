import mysql.connector
import os
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
    senha = getpass.getpass('Senha: ')
    
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