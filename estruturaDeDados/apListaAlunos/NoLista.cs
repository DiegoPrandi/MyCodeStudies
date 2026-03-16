using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

public class NoLista<Dado> where Dado : IComparable<Dado>
{
    private Dado info;
    private NoLista<Dado> prox;

    public Dado Info
    { 
        get => info; 
        set => info = value; 
    }
    public NoLista<Dado> Prox { get => prox; set => prox = value; }

    public NoLista(Dado info, NoLista<Dado> prox)
    {
        this.info = info;
        this.prox = prox;
    }

    public NoLista(Dado info)
    {
        this.info = info;
        this.prox = null;
    }
}

