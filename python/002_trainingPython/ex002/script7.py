# Faça um programa que receba a temperatura média de cada mês do ano e
# armazene-as numa lista. Após isto, calcule a média anual das temperaturas e
# mostre todas as temperaturas acima da média anual, e em que mês elas
# ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).

def average_temperature():
    average_list = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120]
    months = ['Janeiro', 'Fevereiro', 'Março', 'Abril', 'Maio', 'Junho', 'Julho', 'Agosto', 'Setembro', 'Outubro', 'Novembro', 'Dezembro']

    soma = sum(average_list)
    media_anual = soma / len(average_list)

    print(f'Média da temperatura anual: {media_anual}°C')

    print("\nTemperaturas acima da média anual:")
    
    for i, value in enumerate(average_list):
        if value > media_anual:
            print(f'{i} - {months[i]}: {value}')


average_temperature()