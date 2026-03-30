def somaImposto(taxaImposto, custo):
    imposto = custo * (taxaImposto / 100)

    custo += imposto
    return custo


    
