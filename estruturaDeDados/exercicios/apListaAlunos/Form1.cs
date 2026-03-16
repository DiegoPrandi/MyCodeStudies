using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Windows.Forms;

namespace apListaAlunos
{
    public partial class FrmAlunos : Form
    {
        NoLista<Aluno> novoNo = null;
        ListaSimples<Aluno> lista1, lista2;
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
            lista1 = new ListaSimples<Aluno>();
        }

        private void btnInserirAposFim_Click(object sender, EventArgs e)
        {
            if (txtRA.Text != "" && txtNome.Text != "")
            {
                var novoAluno = new Aluno(txtRA.Text,
                                          txtNome.Text, 
                                          (double) udMedia.Value);
                lista1.InserirAposFim(novoAluno);
            }
            else
            {
                MessageBox.Show("Você precisa digitar RA e Nome!");
                txtRA.Focus();  // coloca o cursor dentro do txtRA
            }
        }

        private void btnListar_Click(object sender, EventArgs e)
        {
            Exibir_Lista(lista1, lsbUm);
        }

        private void btnInserirAntesDoInicio_Click(object sender, EventArgs e)
        {
            if (txtRA.Text != "" && txtNome.Text != "")
            {
                var novoAluno = new Aluno(txtRA.Text,
                                          txtNome.Text,
                                          (double)udMedia.Value);
                lista1.InserirAntesDoInicio(novoAluno);
            }
            else
            {
                MessageBox.Show("Você precisa digitar RA e Nome!");
                txtRA.Focus();  // coloca o cursor dentro do txtRA
            }
        }

        private void openFileDialog1_FileOk(object sender, CancelEventArgs e)
        {

        }

        private void btnLerArquivo1_Click(object sender, EventArgs e)
        {
            Fazer_Leitura(ref lista1);
            Exibir_Lista(lista1, lsbUm);
        }

        private void btnLerArquivo2_Click(object sender, EventArgs e)
        {
            Fazer_Leitura(ref lista2);
            Exibir_Lista(lista2, lsbDois);
        }

        private void Fazer_Leitura(ref ListaSimples<Aluno> qualLista)
        {
            qualLista = new ListaSimples<Aluno>();
            if (dlgAbrir.ShowDialog() == DialogResult.OK)
            {
                var arquivo = new StreamReader(dlgAbrir.FileName);
                while (!arquivo.EndOfStream) // enquanto não for fim do arquivo texto
                {
                    string linhaLida = arquivo.ReadLine();
                    Aluno alunoLido = new Aluno(linhaLida);
                    qualLista.InserirAposFim(alunoLido);
                }
                arquivo.Close();    // sempre fechar arquivo                
            }
        }

        private void Exibir_Lista(ListaSimples<Aluno> lista,
            ListBox qualListBox)
        {
            qualListBox.Items.Clear();    // limpa o listbox
            List<Aluno> alunos = lista.Listar();
            qualListBox.Items.Add(" RA   Nome                                              Média");
            foreach (Aluno umAluno in alunos)
                qualListBox.Items.Add(umAluno);
        }
    }
}
