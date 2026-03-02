autonomia = 12.0
tempo = float(input('Digite o tempo gasto na viagem (em horas): '))
velocidade = float(input('Digite o velocidade média da viagem : '))

distancia = velocidade * tempo
consumo = distancia / autonomia

print(f'Veloidade: {velocidade}')
print(f'Tempo    : {tempo}')
print(f'Distancia: {distancia}')
print(f'Consumo  : {consumo}')


