using apListaAlunos;
using System;
using System.Collections.Generic;

public class ListaSimples<Dado> 
    where Dado : IComparable<Dado>, 
                 ICriterioDeSeparacao<Dado>
{
    private NoLista<Dado> primeiro, // ponteiro do primeiro nó
                          ultimo,   // ponteiro do último nó
                          atual,
                          anterior;
    private int quantosNos;         // contador de nós da lista

    public ListaSimples()
    {
        primeiro = ultimo = atual = anterior = null;
        quantosNos = 0;
    }

    public int Tamanho => quantosNos;   // retorna (get) o valor de quantosNos

    public NoLista<Dado> Primeiro
    { 
        get => primeiro;
    }

    public NoLista<Dado> Ultimo => ultimo;

    public bool EstaVazia => primeiro == null;

    // precisaremos desenvolver métodos para:
    // - listar os dados da lista ligada
    // - incluir um novo nó após o último nó
    // - incluir um novo nó antes do primeiro nó
    // - incluir um novo nó entre dois outros nós
    // - buscar um Dado dentro dos nós da lista (pesquisa)
    // - excluir o nó que armazena o Dado desejado
    // - ordenar a lista ligada pelo atributo de comparação da classe Dado

    public void InserirAposFim(Dado novoDado)
    {
        // criamos um novo nó, que armazenará o novoDado
        // no seu atributo info:
        var novoNo = new NoLista<Dado>(novoDado);

        // decidimos em que local "amarrar" o novo nó 
        // que criamos:
        if (EstaVazia)
            primeiro = novoNo;  // é o 1o nó a ser inserido
        else
            ultimo.Prox = novoNo;

        ultimo = novoNo;        // passa a ser o último da lista
        quantosNos++;
    }

    public void InserirAntesDoInicio(Dado novoDado)
    {
        // criamos um novo nó, que armazenará o novoDado
        // no seu atributo info:
        var novoNo = new NoLista<Dado>(novoDado);

        // decidimos em que local "amarrar" o novo nó 
        // que criamos:
        if (EstaVazia)
            ultimo = novoNo;
        else
            novoNo.Prox = primeiro;

        primeiro = novoNo;        // passa a ser o último da lista
        quantosNos++;
    }
    public List<Dado> Listar()
    {
        var osDados = new List<Dado>();
        anterior = null;
        atual = primeiro;
        while (atual != null)
        {
            // adiciona a informação desse nó atual na lista de 
            // resultados:
            osDados.Add(atual.Info);

            // avança ponteiro atual para o nó seguinte a ele:
            anterior = atual;
            atual = atual.Prox; 
        }
        return osDados;
    }

    // exercício 1
    public int ContarNos()
    {
        int contadorDeNos = 0;
        // percorrer cada nó da lista
        // do primeiro ao fim e contar cada um

        return contadorDeNos; 
    }

    // exercício 2
    public DuasListas<Dado> SepararListaEmDuas()
    {
        ListaSimples<Dado> listaA, listaB;
        listaA = new ListaSimples<Dado>();
        listaB = new ListaSimples<Dado>();

        // percorrer a lista this, para cada nó chamar
        // o método DeveSeparar() do dado armazenado (info)
        // Se DeveSeparar() retornar true, inclua, no final
        // da listaA, o nó atualmente visitado da lista this 
        // Caso contrário, inclua, no final da listaB, o nó 
        // atualmente visitado da lista this

        var duasListas = new DuasListas<Dado>(listaA, listaB);
        return duasListas;
    }

    public ListaSimples<Dado> Unir(ListaSimples<Dado> outraLista)
    {
        var novaLista = new ListaSimples<Dado>();
        // percorrer, em paralelo, a lista this e a outraLista
        // intercalando e colocando na novaLista o menor info
        // entre a lista this e a lista outraLista
        // ao final, retornar a novalista:

        return novaLista;
    }


    // exercício 4

    public void Inverter()
    {
        // percorrer a lista this, do primeiro ao fim, e
        // trocando os ponteiros de modo que a lista fique
        // invertida, ou seja, o primeiro nó será o último,
        // o segundo nó será o penúltimo e assim sucessivamente
        
    }
}

