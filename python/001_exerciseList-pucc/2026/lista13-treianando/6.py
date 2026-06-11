# Crie um programa com funções separadas para: cadastrar N produtos (nome e preço), 
# buscar um produto pelo nome e exibir seus dados, e listar todos os produtos com preço
# acima de um valor informado pelo usuário.


def cadastrarProduto():
    produtos = []
    qtdeProdutos = int(input('Quantos produtos vai cadastrar: '))
    for i in range(qtdeProdutos):
        print(f'\n{i+1} PRODUTO')
        nomeProduto = input('Digite o nome do produto: ')
        preco = float(input('Digite o preco do produto: '))
        produto = [nomeProduto, preco]
        produtos.append(produto)
    return produtos

def buscarProduto(produtos):
    nomeProdutoBuscar = input('\nDigite o nome do produto que deseja buscar: ')
    for i in produtos:
        if i[0].lower() == nomeProdutoBuscar:
            print('PRODUTO: ', i[0])
            print('PRECO  : ', i[1])
            return
    
    print('Produto nao encontrado')


def listarValorAcima(produtos):
    valorListar = float(input('\nListar produtos com valores acima de: '))
    encontrou = False
    for i in produtos:
        if i[1] > valorListar:
            print('\nPRODUTO:', i[0])
            print('PREÇO   :', i[1])
            encontrou = True

    if not encontrou:
        print('Nenhum produto encontrado')

produto = cadastrarProduto()
buscarProduto(produto)
listarValorAcima(produto)