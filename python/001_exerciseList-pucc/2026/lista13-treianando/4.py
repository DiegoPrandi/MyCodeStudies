# Crie um dicionário com pelo menos 5 países e suas capitais (fixos no código).
# Leia um país do usuário e informe a capital. Se não existir, informe que o país não está cadastrado.

dicionario = {
    'Brasil': 'Brasilia',
    'Argentina': 'Buenos Aires',
    'Peru': 'Lima',
    'Venezuela': 'Caracas',
    'Portugal': 'Lisboa'
}

pais = input('Digite o nome de um pais: ').capitalize()
encontrado = False
for paises, dados in dicionario.items():
    if pais == paises:
        encontrado = True
        print(f'CAPITAL: ',dados)

if not encontrado:
    print('Pais nao cadastrado')