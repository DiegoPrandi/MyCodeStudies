namespace apListaAlunos
{
    partial class FrmAlunos
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.txtNome = new System.Windows.Forms.TextBox();
            this.txtRA = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.udMedia = new System.Windows.Forms.NumericUpDown();
            this.btnInserirAposFim = new System.Windows.Forms.Button();
            this.btnListar = new System.Windows.Forms.Button();
            this.lsbUm = new System.Windows.Forms.ListBox();
            this.btnInserirAntesDoInicio = new System.Windows.Forms.Button();
            this.lsbDois = new System.Windows.Forms.ListBox();
            this.lsbTres = new System.Windows.Forms.ListBox();
            this.btnLerArquivo1 = new System.Windows.Forms.Button();
            this.btnContarNos = new System.Windows.Forms.Button();
            this.lbQuantosNos = new System.Windows.Forms.Label();
            this.btnSepararLista = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btnUnir = new System.Windows.Forms.Button();
            this.btnLerArquivo2 = new System.Windows.Forms.Button();
            this.btnInverter = new System.Windows.Forms.Button();
            this.dlgAbrir = new System.Windows.Forms.OpenFileDialog();
            ((System.ComponentModel.ISupportInitialize)(this.udMedia)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.label1.Location = new System.Drawing.Point(4, 44);
            this.label1.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(86, 20);
            this.label1.TabIndex = 1;
            this.label1.Text = "Seu nome:";
            // 
            // txtNome
            // 
            this.txtNome.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.txtNome.ForeColor = System.Drawing.Color.Black;
            this.txtNome.Location = new System.Drawing.Point(98, 41);
            this.txtNome.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.txtNome.MaxLength = 50;
            this.txtNome.Name = "txtNome";
            this.txtNome.Size = new System.Drawing.Size(444, 26);
            this.txtNome.TabIndex = 2;
            // 
            // txtRA
            // 
            this.txtRA.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(224)))), ((int)(((byte)(192)))));
            this.txtRA.ForeColor = System.Drawing.Color.Black;
            this.txtRA.Location = new System.Drawing.Point(98, 2);
            this.txtRA.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.txtRA.MaxLength = 5;
            this.txtRA.Name = "txtRA";
            this.txtRA.Size = new System.Drawing.Size(60, 26);
            this.txtRA.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.label2.Location = new System.Drawing.Point(4, 5);
            this.label2.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(77, 20);
            this.label2.TabIndex = 3;
            this.label2.Text = "Seu R.A.:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.label3.Location = new System.Drawing.Point(4, 83);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(56, 20);
            this.label3.TabIndex = 5;
            this.label3.Text = "Média:";
            // 
            // udMedia
            // 
            this.udMedia.DecimalPlaces = 1;
            this.udMedia.Increment = new decimal(new int[] {
            1,
            0,
            0,
            65536});
            this.udMedia.Location = new System.Drawing.Point(98, 81);
            this.udMedia.Maximum = new decimal(new int[] {
            10,
            0,
            0,
            0});
            this.udMedia.Name = "udMedia";
            this.udMedia.Size = new System.Drawing.Size(69, 26);
            this.udMedia.TabIndex = 6;
            // 
            // btnInserirAposFim
            // 
            this.btnInserirAposFim.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.btnInserirAposFim.Location = new System.Drawing.Point(211, 122);
            this.btnInserirAposFim.Name = "btnInserirAposFim";
            this.btnInserirAposFim.Size = new System.Drawing.Size(118, 29);
            this.btnInserirAposFim.TabIndex = 7;
            this.btnInserirAposFim.Text = "Inserir no Fim";
            this.btnInserirAposFim.UseVisualStyleBackColor = true;
            this.btnInserirAposFim.Click += new System.EventHandler(this.btnInserirAposFim_Click);
            // 
            // btnListar
            // 
            this.btnListar.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.btnListar.Location = new System.Drawing.Point(464, 122);
            this.btnListar.Name = "btnListar";
            this.btnListar.Size = new System.Drawing.Size(75, 29);
            this.btnListar.TabIndex = 8;
            this.btnListar.Text = "Listar";
            this.btnListar.UseVisualStyleBackColor = true;
            this.btnListar.Click += new System.EventHandler(this.btnListar_Click);
            // 
            // lsbUm
            // 
            this.lsbUm.Font = new System.Drawing.Font("Courier New", 11F);
            this.lsbUm.FormattingEnabled = true;
            this.lsbUm.ItemHeight = 17;
            this.lsbUm.Location = new System.Drawing.Point(8, 155);
            this.lsbUm.Name = "lsbUm";
            this.lsbUm.Size = new System.Drawing.Size(531, 89);
            this.lsbUm.TabIndex = 9;
            // 
            // btnInserirAntesDoInicio
            // 
            this.btnInserirAntesDoInicio.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.btnInserirAntesDoInicio.Location = new System.Drawing.Point(13, 122);
            this.btnInserirAntesDoInicio.Name = "btnInserirAntesDoInicio";
            this.btnInserirAntesDoInicio.Size = new System.Drawing.Size(126, 29);
            this.btnInserirAntesDoInicio.TabIndex = 10;
            this.btnInserirAntesDoInicio.Text = "Inserir no início";
            this.btnInserirAntesDoInicio.UseVisualStyleBackColor = true;
            this.btnInserirAntesDoInicio.Click += new System.EventHandler(this.btnInserirAntesDoInicio_Click);
            // 
            // lsbDois
            // 
            this.lsbDois.Font = new System.Drawing.Font("Courier New", 11F);
            this.lsbDois.FormattingEnabled = true;
            this.lsbDois.ItemHeight = 17;
            this.lsbDois.Location = new System.Drawing.Point(8, 250);
            this.lsbDois.Name = "lsbDois";
            this.lsbDois.Size = new System.Drawing.Size(531, 89);
            this.lsbDois.TabIndex = 11;
            // 
            // lsbTres
            // 
            this.lsbTres.Font = new System.Drawing.Font("Courier New", 11F);
            this.lsbTres.FormattingEnabled = true;
            this.lsbTres.ItemHeight = 17;
            this.lsbTres.Location = new System.Drawing.Point(8, 345);
            this.lsbTres.Name = "lsbTres";
            this.lsbTres.Size = new System.Drawing.Size(531, 89);
            this.lsbTres.TabIndex = 12;
            // 
            // btnLerArquivo1
            // 
            this.btnLerArquivo1.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.btnLerArquivo1.Location = new System.Drawing.Point(561, 43);
            this.btnLerArquivo1.Name = "btnLerArquivo1";
            this.btnLerArquivo1.Size = new System.Drawing.Size(122, 35);
            this.btnLerArquivo1.TabIndex = 13;
            this.btnLerArquivo1.Text = "Ler Arquivo 1";
            this.btnLerArquivo1.UseVisualStyleBackColor = true;
            this.btnLerArquivo1.Click += new System.EventHandler(this.btnLerArquivo1_Click);
            // 
            // btnContarNos
            // 
            this.btnContarNos.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.btnContarNos.Location = new System.Drawing.Point(561, 109);
            this.btnContarNos.Name = "btnContarNos";
            this.btnContarNos.Size = new System.Drawing.Size(122, 42);
            this.btnContarNos.TabIndex = 14;
            this.btnContarNos.Text = "1. Contar Nós";
            this.btnContarNos.UseVisualStyleBackColor = true;
            // 
            // lbQuantosNos
            // 
            this.lbQuantosNos.AutoSize = true;
            this.lbQuantosNos.Location = new System.Drawing.Point(557, 154);
            this.lbQuantosNos.Name = "lbQuantosNos";
            this.lbQuantosNos.Size = new System.Drawing.Size(104, 20);
            this.lbQuantosNos.TabIndex = 15;
            this.lbQuantosNos.Text = "Quantos nós:";
            // 
            // btnSepararLista
            // 
            this.btnSepararLista.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.btnSepararLista.Location = new System.Drawing.Point(561, 202);
            this.btnSepararLista.Name = "btnSepararLista";
            this.btnSepararLista.Size = new System.Drawing.Size(122, 42);
            this.btnSepararLista.TabIndex = 16;
            this.btnSepararLista.Text = "2. Separar";
            this.btnSepararLista.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(255)))), ((int)(((byte)(255)))));
            this.groupBox1.Controls.Add(this.btnUnir);
            this.groupBox1.Controls.Add(this.btnLerArquivo2);
            this.groupBox1.Location = new System.Drawing.Point(562, 259);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(167, 108);
            this.groupBox1.TabIndex = 17;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "3. Unir listas";
            // 
            // btnUnir
            // 
            this.btnUnir.Location = new System.Drawing.Point(7, 66);
            this.btnUnir.Name = "btnUnir";
            this.btnUnir.Size = new System.Drawing.Size(146, 31);
            this.btnUnir.TabIndex = 1;
            this.btnUnir.Text = "Unir";
            this.btnUnir.UseVisualStyleBackColor = true;
            // 
            // btnLerArquivo2
            // 
            this.btnLerArquivo2.Location = new System.Drawing.Point(7, 26);
            this.btnLerArquivo2.Name = "btnLerArquivo2";
            this.btnLerArquivo2.Size = new System.Drawing.Size(146, 34);
            this.btnLerArquivo2.TabIndex = 0;
            this.btnLerArquivo2.Text = "Ler Arquivo 2";
            this.btnLerArquivo2.UseVisualStyleBackColor = true;
            this.btnLerArquivo2.Click += new System.EventHandler(this.btnLerArquivo2_Click);
            // 
            // btnInverter
            // 
            this.btnInverter.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.btnInverter.Location = new System.Drawing.Point(561, 386);
            this.btnInverter.Name = "btnInverter";
            this.btnInverter.Size = new System.Drawing.Size(122, 42);
            this.btnInverter.TabIndex = 18;
            this.btnInverter.Text = "4. Inverter";
            this.btnInverter.UseVisualStyleBackColor = true;
            // 
            // dlgAbrir
            // 
            this.dlgAbrir.DefaultExt = "*.txt";
            this.dlgAbrir.Filter = "Arquivos de texto|*.txt|Todos os arquivos|*.*";
            this.dlgAbrir.FileOk += new System.ComponentModel.CancelEventHandler(this.openFileDialog1_FileOk);
            // 
            // FrmAlunos
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(736, 440);
            this.Controls.Add(this.btnInverter);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.btnSepararLista);
            this.Controls.Add(this.lbQuantosNos);
            this.Controls.Add(this.btnContarNos);
            this.Controls.Add(this.btnLerArquivo1);
            this.Controls.Add(this.lsbTres);
            this.Controls.Add(this.lsbDois);
            this.Controls.Add(this.btnInserirAntesDoInicio);
            this.Controls.Add(this.lsbUm);
            this.Controls.Add(this.btnListar);
            this.Controls.Add(this.btnInserirAposFim);
            this.Controls.Add(this.udMedia);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtRA);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtNome);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Name = "FrmAlunos";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Manutenção de Alunos usando Lista Ligada";
            this.Load += new System.EventHandler(this.FrmAlunos_Load);
            ((System.ComponentModel.ISupportInitialize)(this.udMedia)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtNome;
        private System.Windows.Forms.TextBox txtRA;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.NumericUpDown udMedia;
        private System.Windows.Forms.Button btnInserirAposFim;
        private System.Windows.Forms.Button btnListar;
        private System.Windows.Forms.ListBox lsbUm;
        private System.Windows.Forms.Button btnInserirAntesDoInicio;
        private System.Windows.Forms.ListBox lsbDois;
        private System.Windows.Forms.ListBox lsbTres;
        private System.Windows.Forms.Button btnLerArquivo1;
        private System.Windows.Forms.Button btnContarNos;
        private System.Windows.Forms.Label lbQuantosNos;
        private System.Windows.Forms.Button btnSepararLista;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btnUnir;
        private System.Windows.Forms.Button btnLerArquivo2;
        private System.Windows.Forms.Button btnInverter;
        private System.Windows.Forms.OpenFileDialog dlgAbrir;
    }
}

