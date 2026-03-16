using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace apListaAlunos
{
    public class Aluno : IComparable<Aluno>, 
                         ICriterioDeSeparacao<Aluno>
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

        public Aluno(string linhaDeDados)
        {
            // ra;nome;media
            // 25381;Carlos Alfredo de Castro;7.5
            string[] campos = linhaDeDados.Split(';');
            this.ra = campos[0];
            this.nome = campos[1];
            this.Media = double.Parse(campos[2]);
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

        public bool DeveSeparar()
        {
            int raInteiro = int.Parse(this.ra);

            // retornará true se o Ra for par

            return raInteiro % 2 == 0;
        }
    }
}
