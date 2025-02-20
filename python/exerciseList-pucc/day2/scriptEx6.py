def time(seconds):
    horas = seconds // 3600
    seconds %= 3600
    minutos = seconds // 60
    seconds %= 60

    return horas, minutos, seconds


time_seconds = int(input('Digite o tempo em segundos: '))
print(time(time_seconds))


        