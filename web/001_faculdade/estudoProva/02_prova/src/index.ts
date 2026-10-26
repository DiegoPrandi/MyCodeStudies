import express, { Request, Response } from 'express';

const app = express();
app.use(express.json());
const PORT = 3000;

const limites = { escrita: 6, fotografia: 4 };

const inscricoes = [
    { id: 1, nome: 'Lia', oficina: 'escrita', vagas: 2 },
    { id: 2, nome: 'Caio', oficina: 'fotografia', vagas: 1 },
];

const armarios = [
    { id: 1, local: 'Sala A', capacidade: 8, ocupados: 3, ativo: true },
    { id: 2, local: 'Sala B', capacidade: 5, ocupados: 0, ativo: true },
];

let proximoId = 3;

app.get('/inscricoes', (req: Request, res: Response) => {
    const oficina = req.query.oficina;

    if (oficina) {
        const filtrados = inscricoes.filter((item) => item.oficina === oficina);
        return res.status(200).json(filtrados);
    }

    return res.status(200).json(inscricoes);
});

app.get('/inscricoes/:id', (req: Request, res: Response) => {
    const id = Number(req.params.id);
    const inscricao = inscricoes.find((item) => item.id === id);

    if (!Number.isInteger(id) || id <= 0) {
        return res.status(400).json({ mensagem: 'Id invalido' });
    }
    if (!inscricao) {
        return res.status(404).json({ mensagem: 'Aluno não encontrado' });
    }
    return res.status(200).json(inscricao);
});

app.post('/inscricoes', (req: Request, res: Response) => {
    const { nome, oficina, vagas } = req.body;
    if (
        typeof nome !== 'string' ||
        nome.trim().length < 3 ||
        (oficina !== 'escrita' && oficina !== 'fotografia') ||
        !Number.isInteger(vagas) ||
        vagas < 1 ||
        vagas > 3
    ) {
        return res.status(400).json({ mensagem: 'dados incorretos' });
    }
    const oficinaValidada = oficina as 'escrita' | 'fotografia';

    let vagasReservadas = 0;
    for (const item of inscricoes) {
        if (item.oficina === oficina) {
            vagasReservadas += item.vagas;
        }
    }

    if (vagasReservadas + vagas > limites[oficinaValidada]) {
        return res.status(400).json({
            mensagem: 'limite de vagas atingido',
        });
    }
    const nova = {
        id: proximoId,
        nome: nome.trim(),
        oficina,
        vagas,
    };
    inscricoes.push(nova);
    proximoId++;
    return res.status(200).json(nova);
});

app.put('/armarios/:id', (req: Request, res: Response) => {
    const id = Number(req.params.id);
    if (!Number.isInteger(id) || id <= 0) {
        return res.status(400).json({ mensagem: 'id invalido' });
    }

    const armario = armarios.find((item) => item.id === id);

    if (!armario) {
        return res.status(404).json({ mensagem: 'armario não encontrado' });
    }

    if (!armario.ativo) {
        return res.status(400).json({ mensagem: 'armario inativo' });
    }

    const { local, capacidade } = req.body;

    if (
        typeof local !== 'string' ||
        local.trim().length < 2 ||
        capacidade < 1 ||
        capacidade > 20 ||
        capacidade < armario.ocupados
    ) {
        return res.status(400).json({ mensagem: 'dados invalidos' });
    }

    armario.local = local.trim();
    armario.capacidade = capacidade;
    return res.status(200).json(armario);
});

app.listen(PORT, () => {
    console.log(`Servidor BACKEND rodando em http://localhost:${PORT}`);
});
