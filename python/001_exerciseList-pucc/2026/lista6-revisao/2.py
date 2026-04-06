nome= str(input('Digite seu nome: '))

pafaruso = float(input('Digite o valor do parafuso: '))
porcas = float(input('Digite o valor da porca: '))
arruelas = float(input('Digite o valor da arruela: '))

nParafusos = int(input('Digite quantos parafusos quer: '))
nPorcas = int(input('Digite quantas porcas quer: '))
nArruelas = int(input('Digite quantas arruelas quer: '))

vParafusos = (pafaruso * nParafusos) * 1.10
vPorcas = (porcas * nPorcas) * 1.20
vArruelas = (arruelas * nArruelas) * 1.30
vFinal = vParafusos + vPorcas + vArruelas

print('Nome:', nome)
print('valor final: ', vFinal)
