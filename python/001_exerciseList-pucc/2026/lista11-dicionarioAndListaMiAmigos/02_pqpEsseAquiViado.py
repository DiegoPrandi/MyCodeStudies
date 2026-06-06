# Seja a seguinte definição de uma estrutura de dados
# representando um livro:
# • código do livro: número inteiro
# • título: string
# • número de autores: número inteiro
# de acordo com o número de autores – nomes dos autores: string
# • preço: número real

# Você irá trabalhar com dicionários e listas
# Crie um dicionário de livros, onde o código do livro é a
# chave e este dicionário, para cada chave é constituído de
# uma lista com as outras informações
# Após a leitura dos dados, realizara as seguintes tarefas
# • Buscar um livro pelo título, imprimir todas as suas
# informações se ele existir
# • Buscar um livro pelo código, imprimir todas as suas
# informações se ele existir
# • imprimir os dados dos livros com preço superior a
# R$50.00. Apresente os dados no formato de uma tabela.


def ler_codigo_livro():
    codigo = input('Digite o codigo do livro: ')
    while not codigo.isdigit():
        print('Digite o codigo corretamente')
        codigo = input('Digite o codigo do livro: ')
    return int(codigo)

def ler_titulo_livro():
    titulo = input('Digite o nome do livro: ')
    return titulo

def ler_autores():
    autores = []
    qtde_autores = input('Quantos Autores tem o livro: ')
    while not qtde_autores.isdigit():
        print('Digite a quantidade corretamente')
        qtde_autores = input('Quantos Autores tem o livro: ')
    qtde_autores = int(qtde_autores)

    for i in range(qtde_autores):
        print(f'{i+1}° AUTOR:')
        autor = input('-> ')
        autores.append(autor)
    return autores

def ler_preco():
    preco = float(input('Digite o preco do livro: '))
    return preco

def cadastrar_livro():
    dicionarioLivros = {}
    total_livro = int(input('Quantos livros deseja cadastrar? '))
    
    for i in range(total_livro):
        print(f'\nLIVRO NUMERO {i+1}°')

        codigo = ler_codigo_livro()
        if codigo in dicionarioLivros:
            print('Codigo do livro ja cadastrado')
            continue

        titulo = ler_titulo_livro()
        autores = ler_autores()
        preco = ler_preco()

        dicionarioLivros[codigo] = [titulo, autores, preco]
    print(dicionarioLivros)
    return dicionarioLivros

def busca_livro_por_titulo(dicionario):
    titulo_livro = input('\nDigite o TITULO do livro que deseja buscar: ').lower()
    encontrou = False

    for codigo, dados in dicionario.items():
        if titulo_livro == dados[0].lower():
            print(f'Codigo: {codigo}')
            print(f'Titulo: {dados[0]}')
            print(f'Autores: {', '.join(dados[1])}')
            print(f'Preco: {dados[2]}')

    if not encontrou:
        print('Nenhum livro encontradro')
            
def busca_livro_por_codigo(dicionario):
    codigo_livro = int(input('\nDigite o CODIGO do livro que deseja buscar: '))
    encontrou = False

    for codigo, dados in dicionario.items():
        if codigo_livro == codigo:
            print(f'Codigo: {codigo}')
            print(f'Titulo: {dados[0]}')
            print(f'Autores: {', '.join(dados[1])}')
            print(f'Preco: {dados[2]}')

    if not encontrou:
        print('Nenhum livro encontradro')

def livros_acima_de_50(dicionario):
    encontrou = False

    print(f'{"CODIGO":10} | {"TITULO":40} | {"AUTOR(ES)":30} | {"PRECO":10}')
    print('-' * 100)

    for codigo, dados in dicionario.items():
        if dados[2] > 50:
            encontrou = True

            autores = ', '.join(dados[1])

            print(
                f'{codigo:<10} | '
                f'{dados[0]:<40} | '
                f'{autores:<30} | '
                f'R${dados[2]:<8.2f}'
            )

    if not encontrou:
        print('Nenhum livro acima de R$50.00')


livros_cadastrados = cadastrar_livro()
busca_livro_por_titulo(livros_cadastrados)
busca_livro_por_codigo(livros_cadastrados)
livros_acima_de_50(livros_cadastrados)