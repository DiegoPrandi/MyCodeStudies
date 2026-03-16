using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace apListaAlunos
{
    public class Aluno : IComparable<Aluno>
    {
        private string ra,
               nome;
        private double media;

        public Aluno(string ra, string nome, double media)
        {
            this.ra = ra;
            this.nome = nome;
            this.media = media;
        }

        public double Media
        { 
            get => media;
            set
            {
                if (value < 0 || value > 10)
                    throw new Exception("Média fora do intervalo aceito");

                media = value; 
            }
        }

        public int CompareTo(Aluno outro)
        {
            return this.ra.CompareTo(outro.ra);
        }

        public override string ToString()
        {
            return ra.PadLeft(5, '0') + " " + 
                   nome.PadRight(50, ' ') + " " + media;
        }
    }
}
