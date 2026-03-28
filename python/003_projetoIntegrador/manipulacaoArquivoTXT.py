with open('tomaSeuMardito.txt', 'a') as arqTxt:
    for i in range(1,10):
        arqTxt.write(f'10 x {i} = {10*i}\n')

with open('tomaSeuMardito.txt', 'a', encoding='utf-8') as arqTxt:
    for i in range(1,10):
        arqTxt.write(f'10 x {i} = {10*i}\n')
        arqTxt.write('ççççç')


# utilizando 'w' eu apago o txt inteiro e reencrevo
# utilizando 'a' eu NÃO apago o txt e somente adiciono
# o texto que eu quero a + no txt
# w = write
# a = append
# ambos criam o txt caso não exista

# -----------------------------------

# r = read
# o 'r' somente é utilizando para o txt
# NÃO é possível criar arquivo txt com ele
# somente leitura

try:
    with open('tomaSeuMardito2.txt', 'r') as arqTxt:
        conteudo = arqTxt.read()
        print(conteudo)
except FileNotFoundError:
    print('Arquivo não encontrado')
    with open('tomaSeuMardito2.txt', 'a', encoding='utf-8') as arqTxt:
        arqTxt.write('ixi')
    
    
with open('teste.txt', 'r') as arqTxt:
    conteudo = arqTxt.read()
    print(conteudo)
