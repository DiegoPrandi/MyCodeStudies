al_escada = int(input('Digite a altura do degrau da escada: '))
al_subir = int(input('Digite a altura do que quer subir a escada: '))

if al_escada < al_subir:
    print(f'Altura da escada é {al_escada} não tem como subir mais doq isso ')
else:
    degraus = al_escada//al_subir

print(f'vc vai subir {degraus} desgraus')
