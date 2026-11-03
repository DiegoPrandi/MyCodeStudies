document.getElementById('cep');
document.getElementById('logradouro');
document.getElementById('bairro');
document.getElementById('cidade');
document.getElementById('estado');

const botao = document.getElementById('buscar_cep');

botao.addEventListener('click', async function () {
    const cep = document.getElementById('cep').value.replace('-', '');

    if (cep.length !== 8 || isNaN(cep)) {
        alert('CEP invalido');
        return;
    }

    try {
        const resposta = await fetch(`https://viacep.com.br/ws/${cep}/json/`);
        const dados = await resposta.json();

        if (dados.erro) {
            alert('CEP nao encontrado');
            return;
        }

        document.getElementById('logradouro').value = dados.logradouro;
        document.getElementById('bairro').value = dados.bairro;
        document.getElementById('cidade').value = dados.localidade;
        document.getElementById('estado').value = dados.uf;
    } catch (erro) {
        alert('Erro ao consultar o CEP');
    }
});
