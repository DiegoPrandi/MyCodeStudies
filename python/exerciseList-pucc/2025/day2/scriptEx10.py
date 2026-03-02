def car_company(num_cars, sales_value):
    wage = 1500.0
    total_commission = 200 * num_cars
    commission_percentage = sales_value * 0.05
    total_wage = wage + total_commission + commission_percentage

    print(f'\nSalário Base: \t\t\tR$ {wage}')
    print(f'\nNúmero de carros vendidos: \tUn {num_cars:.0f}')
    print(f'\nTotal de Vendas: \t\tR$ {sales_value}')
    print(f'\nTotal de comissão: \t\tR$ {total_commission}')
    print(f'\nTotal de Adicional de 5%: \tR$ {commission_percentage:.2f}')
    print(f'\nSalário a receber: \t\tR$ {total_wage}')

num_cars = float(input('Total de carros vendidos: '))
sales_value = float(input('Valor total dos carros vendidos: '))

car_company(num_cars, sales_value)