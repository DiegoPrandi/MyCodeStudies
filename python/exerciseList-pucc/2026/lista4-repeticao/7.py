n = int(input('Digite o Código: '))


match n:
    case 1:
        print('Alimento não-perecível')
    
    case 2 | 3 | 4:
        print('Alimento perecível')

    case 5 | 6:
        print('Vestuário')
    
    case 7:
        print('Higiene')
    
    case n if 7 < n < 16:
        print('Limpeza e Utensílio Domésticos')

    case _:
        print('Digite um código valido')


    