using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace apListaAlunos
{
    public class DuasListas<Dado>
        where Dado : IComparable<Dado>,
                     ICriterioDeSeparacao<Dado>
    {
        ListaSimples<Dado> primeiraLista, segundaLista;

        public DuasListas(ListaSimples<Dado> primeiraLista, 
                          ListaSimples<Dado> segundaLista)
        {
            this.primeiraLista = primeiraLista;
            this.segundaLista = segundaLista;
        }
    }
}
