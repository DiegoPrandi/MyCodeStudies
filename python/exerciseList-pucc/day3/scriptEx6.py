tempoGasto = int(input('Digite o tempo gasto na viagem: '))
mediaVel = int(input('Digite a media de velocidade do automovel (km/h): '))
autonomia = 12
distancia = mediaVel * tempoGasto
consumo = distancia / autonomia

print(f'Velocidade média \t--- \t{mediaVel}')
print(f'Tempo gasto \t\t--- \t{tempoGasto}')
print(f'Distância \t\t--- \t{distancia}')
print(f'Consumo \t\t--- \t{consumo:.2f}')