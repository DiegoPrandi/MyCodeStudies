import express, { Request, Response } from 'express';

const app = express();
app.use(express.json());
const PORT = 3000;

interface musicas {
    id: number;
    titulo: string;
    artista: string;
    genero: string;
    anoLancamento: number;
    duracao: number;
    situacao: string;
}

let musicas: musicas[] = [
    {
        id: 1,
        titulo: 'Bohemian Rhapsody',
        artista: 'Queen',
        genero: 'Rock',
        anoLancamento: 1975,
        duracao: 354,
        situacao: 'Ativa',
    },
    {
        id: 2,
        titulo: 'Billie Jean',
        artista: 'Michael Jackson',
        genero: 'Pop',
        anoLancamento: 1982,
        duracao: 294,
        situacao: 'Ativa',
    },
    {
        id: 3,
        titulo: 'Garota de Ipanema',
        artista: 'Tom Jobim',
        genero: 'Bossa Nova',
        anoLancamento: 1962,
        duracao: 170,
        situacao: 'Ativa',
    },
    {
        id: 4,
        titulo: 'Lose Yourself',
        artista: 'Eminem',
        genero: 'Rap',
        anoLancamento: 2002,
        duracao: 326,
        situacao: 'Inativa',
    },
];
let proximoId = 5;

app.listen(PORT, () => {
    console.log(`Servidor BACKEND rodando em http://localhost:${PORT}`);
});

// 1. Listar músicas
app.get('/musicas', (req: Request, res: Response) => {
    const genero = req.query.genero;
    const situacao = req.query.situacao;
    const artista = req.query.artista;
    const anoLancamento = req.query.anoLancamento;

    if (genero) {
        const filtrados = musicas.filter((item) => item.genero === genero);
        return res.status(200).json(filtrados);
    }
    if (situacao) {
        const filtrados = musicas.filter((item) => item.situacao === situacao);
        return res.status(200).json(filtrados);
    }
    if (artista) {
        const filtrados = musicas.filter((item) => item.artista === artista);
        return res.status(200).json(filtrados);
    }
    if (anoLancamento) {
        const filtrados = musicas.filter((item) => item.anoLancamento === Number(anoLancamento));
        return res.status(200).json(filtrados);
    }
    return res.status(200).json(musicas);
});

// 2. Buscar música por ID
app.get('/musicas/:id', (req: Request, res: Response) => {
    const id = Number(req.params.id);
    const musica = musicas.find((item) => item.id === id);

    if (!musica) {
        return res.status(404).json({ mensagem: 'Música não encontrada.' });
    }
    return res.status(200).json(musica);
});

// 3. Cadastrar nova música
app.post('/musicas', (req: Request, res: Response) => {
    const { titulo, artista, genero, anoLancamento, duracao } = req.body;

    if (!titulo || !artista || !genero || !anoLancamento || !duracao) {
        return res.status(400).json({
            mensagem: 'Título, artista, gênero, ano de lançamento e duração são obrigatórios.',
        });
    }

    const novaMusica: musicas = {
        id: proximoId,
        titulo,
        artista,
        genero,
        anoLancamento,
        duracao,
        situacao: 'Ativa',
    };
    musicas.push(novaMusica);
    proximoId++;
    return res.status(201).json(novaMusica);
});

// 4. Atualizar música
app.put('/musicas/:id', (req: Request, res: Response) => {
    const id = Number(req.params.id);
    const musica = musicas.find((item) => item.id === id);

    if (!musica) {
        return res.status(404).json({ mensagem: 'Música não encontrada.' });
    }

    const { titulo, artista, genero, anoLancamento, duracao, situacao } = req.body;

    if (!titulo || !artista || !genero || !anoLancamento || !duracao || !situacao) {
        return res.status(400).json({
            mensagem: 'Título, artista, gênero, ano de lançamento e duração são obrigatórios.',
        });
    }

    musica.titulo = titulo;
    musica.artista = artista;
    musica.genero = genero;
    musica.anoLancamento = anoLancamento;
    musica.duracao = duracao;
    musica.situacao = situacao;

    return res.status(200).json(musica);
});

// 5. Inativar música
app.delete('/musicas/:id', (req: Request, res: Response) => {
    const id = Number(req.params.id);
    const musica = musicas.find((item) => item.id === id);

    if (!musica) {
        return res.status(404).json({ mensagem: 'Música não encontrada.' });
    }

    musica.situacao = 'Inativo';
    return res.status(200).json({ mensagem: 'Música inativada com sucesso.', musica });
});
