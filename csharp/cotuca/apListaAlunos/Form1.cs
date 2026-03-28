using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace apListaAlunos
{
    public partial class FrmAlunos : Form
    {
        NoLista<Aluno> novoNo = null;
        ListaSimples<Aluno> osAlunos;
        public FrmAlunos()
        {
            InitializeComponent();
        }

        private void btnTeste_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Olá, " + txtNome.Text, "Seja bem vindo(a)!");
            var novoAluno = new Aluno("25452", "Carlota Joaquina", 7.2);
            novoNo = new NoLista<Aluno>(novoAluno);
            novoNo.Info.Media = 15.0;
        }

        private void FrmAlunos_Load(object sender, EventArgs e)
        {
            // instanciamos o objeto que representará
            // a lista ligada nesse programa
            osAlunos = new ListaSimples<Aluno>();
        }

        private void btnInserirAposFim_Click(object sender, EventArgs e)
        {
            if (txtRA.Text != "" && txtNome.Text != "")
            {
                var novoAluno = new Aluno(txtRA.Text,
                                          txtNome.Text, 
                                          (double) udMedia.Value);
                osAlunos.InserirAposFim(novoAluno);
            }
            else
            {
                MessageBox.Show("Você precisa digitar RA e Nome!");
                txtRA.Focus();  // coloca o cursor dentro do txtRA
            }
        }

        private void btnListar_Click(object sender, EventArgs e)
        {
            lsbAlunos.Items.Clear();    // limpa o listbox
            List<Aluno> alunos = osAlunos.Listar();
            lsbAlunos.Items.Add(" RA   Nome                                              Média");
            foreach (Aluno umAluno in alunos)
                lsbAlunos.Items.Add(umAluno);
        }

        private void btnInserirAntesDoInicio_Click(object sender, EventArgs e)
        {
            if (txtRA.Text != "" && txtNome.Text != "")
            {
                var novoAluno = new Aluno(txtRA.Text,
                                          txtNome.Text,
                                          (double)udMedia.Value);
                osAlunos.InserirAntesDoInicio(novoAluno);
            }
            else
            {
                MessageBox.Show("Você precisa digitar RA e Nome!");
                txtRA.Focus();  // coloca o cursor dentro do txtRA
            }
        }
    }
}
