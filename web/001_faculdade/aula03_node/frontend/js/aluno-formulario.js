/*
Arquivo: aluno-formulario.js
Responsabilidade: controlar a página manipular-aluno.html.
Funções principais:
- buscar aluno por RA
- preencher formulário
- montar objeto aluno
- cadastrar aluno
- atualizar aluno
- limpar formulário
*/
let modoEdicao = false;
async function buscarAlunoPorRa() {
    try {
        const ra = Number(document.getElementById('ra').value);
        if (!ra) {
            exibirMensagem('warning', 'Informe um RA válido para buscar.');
            return;
        }
        const aluno = await buscarAlunoApi(ra);
        preencherFormulario(aluno);
        modoEdicao = true;
        atualizarModoFormulario();
        exibirMensagem('success', 'Aluno encontrado. Você está no modo edição.');
    } catch (erro) {
        modoEdicao = false;
        atualizarModoFormulario();
        exibirMensagem('danger', erro.message);
    }
}
async function salvarAluno(evento) {
    evento.preventDefault();
    try {
        const aluno = montarAlunoDoFormulario();
        if (!validarAluno(aluno)) {
            return;
        }
        if (modoEdicao) {
            const alunoAtualizado = await atualizarAlunoApi(aluno.ra, aluno);
            preencherFormulario(alunoAtualizado);
            exibirMensagem('success', 'Aluno atualizado com sucesso.');
        } else {
            const alunoCadastrado = await cadastrarAlunoApi(aluno);
            preencherFormulario(alunoCadastrado);
            modoEdicao = true;
            atualizarModoFormulario();
            exibirMensagem('success', 'Aluno cadastrado com sucesso.');
        }
    } catch (erro) {
        exibirMensagem('danger', erro.message);
    }
}
function montarAlunoDoFormulario() {
    const ra = Number(document.getElementById('ra').value);
    const nome = document.getElementById('nome').value.trim();
    const email = document.getElementById('email').value.trim();
    const curso = document.getElementById('curso').value;
    const semestre = Number(document.getElementById('semestre').value);
    const situacao = document.getElementById('situacao').value;
    return {
        ra,
        nome,
        email,
        curso,
        semestre,
        situacao,
    };
}
function preencherFormulario(aluno) {
    document.getElementById('ra').value = aluno.ra;
    document.getElementById('nome').value = aluno.nome;
    document.getElementById('email').value = aluno.email;
    document.getElementById('curso').value = aluno.curso;
    document.getElementById('semestre').value = aluno.semestre;
    document.getElementById('situacao').value = aluno.situacao;
}
function limparFormulario() {
    document.getElementById('formAluno').reset();
    modoEdicao = false;
    atualizarModoFormulario();
    exibirMensagem('info', 'Formulário limpo. Você está no modo cadastro.');
}
function validarAluno(aluno) {
    if (!aluno.ra) {
        exibirMensagem('warning', 'O RA é obrigatório.');
        return false;
    }
    if (!aluno.nome) {
        exibirMensagem('warning', 'O nome é obrigatório.');
        return false;
    }
    if (!aluno.email) {
        exibirMensagem('warning', 'O e-mail é obrigatório.');
        return false;
    }
    if (!aluno.curso) {
        exibirMensagem('warning', 'O curso é obrigatório.');
        return false;
    }
    if (!aluno.semestre) {
        exibirMensagem('warning', 'O semestre é obrigatório.');
        return false;
    }
    if (aluno.semestre < 1 || aluno.semestre > 12) {
        exibirMensagem('warning', 'O semestre deve estar entre 1 e 12.');
        return false;
    }
    if (!aluno.situacao) {
        exibirMensagem('warning', 'A situação é obrigatória.');
        return false;
    }
    return true;
}
function atualizarModoFormulario() {
    const badge = document.getElementById('modoFormulario');
    if (modoEdicao) {
        badge.className = 'badge text-bg-warning';
        badge.innerText = 'Modo edição';
    } else {
        badge.className = 'badge text-bg-light';
        badge.innerText = 'Modo cadastro';
    }
}
function exibirMensagem(tipo, mensagem) {
    const areaMensagem = document.getElementById('areaMensagem');
    areaMensagem.className = `alert alert-${tipo}`;
    areaMensagem.innerHTML = mensagem;
}
async function carregarAlunoPelaUrl() {
    const parametros = new URLSearchParams(window.location.search);
    const ra = parametros.get('ra');
    if (ra) {
        document.getElementById('ra').value = ra;
        await buscarAlunoPorRa();
    }
}
window.addEventListener('DOMContentLoaded', carregarAlunoPelaUrl);
