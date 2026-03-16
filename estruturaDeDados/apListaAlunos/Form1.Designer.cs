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
            this.lsbAlunos = new System.Windows.Forms.ListBox();
            this.btnInserirAntesDoInicio = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.udMedia)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
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
            this.btnListar.Location = new System.Drawing.Point(464, 122);
            this.btnListar.Name = "btnListar";
            this.btnListar.Size = new System.Drawing.Size(75, 29);
            this.btnListar.TabIndex = 8;
            this.btnListar.Text = "Listar";
            this.btnListar.UseVisualStyleBackColor = true;
            this.btnListar.Click += new System.EventHandler(this.btnListar_Click);
            // 
            // lsbAlunos
            // 
            this.lsbAlunos.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lsbAlunos.Font = new System.Drawing.Font("Courier New", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(254)));
            this.lsbAlunos.FormattingEnabled = true;
            this.lsbAlunos.ItemHeight = 17;
            this.lsbAlunos.Location = new System.Drawing.Point(8, 155);
            this.lsbAlunos.Name = "lsbAlunos";
            this.lsbAlunos.Size = new System.Drawing.Size(531, 157);
            this.lsbAlunos.TabIndex = 9;
            // 
            // btnInserirAntesDoInicio
            // 
            this.btnInserirAntesDoInicio.Location = new System.Drawing.Point(13, 122);
            this.btnInserirAntesDoInicio.Name = "btnInserirAntesDoInicio";
            this.btnInserirAntesDoInicio.Size = new System.Drawing.Size(126, 29);
            this.btnInserirAntesDoInicio.TabIndex = 10;
            this.btnInserirAntesDoInicio.Text = "Inserir no início";
            this.btnInserirAntesDoInicio.UseVisualStyleBackColor = true;
            this.btnInserirAntesDoInicio.Click += new System.EventHandler(this.btnInserirAntesDoInicio_Click);
            // 
            // FrmAlunos
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(552, 316);
            this.Controls.Add(this.btnInserirAntesDoInicio);
            this.Controls.Add(this.lsbAlunos);
            this.Controls.Add(this.btnListar);
            this.Controls.Add(this.btnInserirAposFim);
            this.Controls.Add(this.udMedia);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.txtRA);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtNome);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(254)));
            this.Margin = new System.Windows.Forms.Padding(4, 5, 4, 5);
            this.Name = "FrmAlunos";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Manutenção de Alunos usando Lista Ligada";
            this.Load += new System.EventHandler(this.FrmAlunos_Load);
            ((System.ComponentModel.ISupportInitialize)(this.udMedia)).EndInit();
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
        private System.Windows.Forms.ListBox lsbAlunos;
        private System.Windows.Forms.Button btnInserirAntesDoInicio;
    }
}

