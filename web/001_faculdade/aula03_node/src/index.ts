import express, { Request, Response } from 'express';

const app = express();
app.use(express.json());
const PORT = 3000;

type cursoAluno = 'Engenharia de Software' | 'Sistema de Informação';
type situacaoAluno = 'Ativo' | 'Formado' | 'Trancado' | 'Inativo';

interface Aluno {
    ra: number;
    nome: string;
    email: string;
    curso: cursoAluno;
    semestre: number;
    situacao: situacaoAluno;
}

let alunos: Aluno[] = [
    {
        ra: 1,
        nome: 'Cleiton',
        email: 'email@email.com',
        curso: 'Engenharia de Software',
        semestre: 1,
        situacao: 'Ativo',
    },
    {
        ra: 2,
        nome: 'Fi do Cleiton',
        email: 'email2@email.com',
        curso: 'Sistema de Informação',
        semestre: 1,
        situacao: 'Trancado',
    },
];

app.listen(PORT, () => {
    console.log(`Servidor BACKEND rodando em http://localhost:${PORT}`);
});

app.get('/alunos', (req: Request, res: Response) => {
    return res.status(200).json(alunos);
});

app.get('/alunos/:ra', (req: Request, res: Response) => {
    const ra = Number(req.params.ra);
    const aluno = alunos.find((item) => item.ra === ra);

    if (!aluno) {
        return res.status(404).json({ mensagem: 'Aluno não encontrado' });
    }
    return res.status(200).json(aluno);
});

app.post('/alunos', (req: Request, res: Response) => {
    const { ra, nome, email, curso, semestre } = req.body;

    // validacoes bla bla bla
    if (!ra || !nome || !email || !curso || !semestre) {
        return res.status(404).json({ mensagem: 'Preencha os campos obrigatorios' });
    }

    const novoAluno: Aluno = {
        ra,
        nome,
        email,
        curso,
        semestre,
        situacao: 'Ativo',
    };

    alunos.push(novoAluno);
    return res.status(200).json(novoAluno);
});
