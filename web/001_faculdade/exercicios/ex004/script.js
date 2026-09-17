const formulario = document.querySelector('#formulario');
const nome = document.querySelector('#nome');
const email = document.querySelector('#email');
const telefone = document.querySelector('#telefone');
const nascimento = document.querySelector('#nascimento');
const checkin = document.querySelector('#checkin');
const checkout = document.querySelector('#checkout');
const hospedes = document.querySelector('#hospedes');
const quarto = document.querySelector('#quarto');
const senha = document.querySelector('#senha');
const confirmacao = document.querySelector('#confirmacao');
const condicoes = document.querySelector('#condicoes');
const resultado = document.querySelector('#resultado');

function mostrarErro(campo, mensagem) {
    campo.classList.add('invalido');

    const erro = document.querySelector(
        '#erro' + campo.id.charAt(0).toUpperCase() + campo.id.slice(1),
    );
    erro.textContent = mensagem;
}

function limparErros() {
    const campos = document.querySelectorAll('input, select');

    campos.forEach(function (campo) {
        campo.classList.remove('invalido');
    });

    const erros = document.querySelectorAll('.campo span, #erroCondicoes');

    erros.forEach(function (erro) {
        erro.textContent = '';
    });

    resultado.textContent = '';
}

formulario.addEventListener('submit', function (event) {
    event.preventDefault();

    limparErros();

    let formularioValido = true;

    const nomeCompleto = nome.value.trim();
    const palavras = nomeCompleto.split(' ');

    if (nomeCompleto.length < 5 || palavras.length < 2 || palavras[1] === '') {
        mostrarErro(nome, 'Digite seu nome completo com pelo menos duas palavras.');
        formularioValido = false;
    }

    if (!email.validity.valid) {
        mostrarErro(email, 'Digite um e-mail válido.');
        formularioValido = false;
    }

    const telefoneValido = /^[0-9]{11}$/;

    if (!telefoneValido.test(telefone.value)) {
        mostrarErro(telefone, 'O telefone deve possuir exatamente 11 números.');
        formularioValido = false;
    }

    if (nascimento.value === '') {
        mostrarErro(nascimento, 'Informe sua data de nascimento.');
        formularioValido = false;
    } else {
        const dataNascimento = new Date(nascimento.value);
        const hoje = new Date();

        let idade = hoje.getFullYear() - dataNascimento.getFullYear();

        const mes = hoje.getMonth() - dataNascimento.getMonth();

        if (mes < 0 || (mes === 0 && hoje.getDate() < dataNascimento.getDate())) {
            idade--;
        }

        if (idade < 18) {
            mostrarErro(nascimento, 'O hóspede responsável deve possuir 18 anos ou mais.');
            formularioValido = false;
        }
    }

    if (checkin.value === '') {
        mostrarErro(checkin, 'Informe a data de check-in.');
        formularioValido = false;
    } else {
        const dataCheckin = new Date(checkin.value + 'T00:00:00');
        const hoje = new Date();
        hoje.setHours(0, 0, 0, 0);

        if (dataCheckin < hoje) {
            mostrarErro(checkin, 'O check-in não pode ser anterior à data atual.');
            formularioValido = false;
        }
    }

    if (checkout.value === '') {
        mostrarErro(checkout, 'Informe a data de check-out.');
        formularioValido = false;
    } else if (checkin.value !== '') {
        const dataCheckin = new Date(checkin.value + 'T00:00:00');
        const dataCheckout = new Date(checkout.value + 'T00:00:00');

        if (dataCheckout <= dataCheckin) {
            mostrarErro(checkout, 'O check-out deve ser posterior ao check-in.');
            formularioValido = false;
        }
    }

    const quantidade = Number(hospedes.value);

    if (quantidade < 1 || quantidade > 5 || hospedes.value === '') {
        mostrarErro(hospedes, 'A quantidade deve estar entre 1 e 5 hóspedes.');
        formularioValido = false;
    }

    if (quarto.value === '') {
        mostrarErro(quarto, 'Selecione um tipo de quarto.');
        formularioValido = false;
    } else {
        if (quarto.value === 'Individual' && quantidade > 1) {
            mostrarErro(quarto, 'O quarto Individual permite apenas 1 hóspede.');
            formularioValido = false;
        }

        if (quarto.value === 'Duplo' && quantidade > 2) {
            mostrarErro(quarto, 'O quarto Duplo permite até 2 hóspedes.');
            formularioValido = false;
        }

        if (quarto.value === 'Família' && quantidade > 5) {
            mostrarErro(quarto, 'O quarto Família permite até 5 hóspedes.');
            formularioValido = false;
        }
    }

    const senhaValida = /^(?=.*[A-Z])(?=.*[0-9]).{8,}$/;

    if (!senhaValida.test(senha.value)) {
        mostrarErro(senha, 'A senha deve ter 8 caracteres, uma letra maiúscula e um número.');
        formularioValido = false;
    }

    if (confirmacao.value !== senha.value) {
        mostrarErro(confirmacao, 'A confirmação da senha deve ser igual à senha.');
        formularioValido = false;
    }

    if (!condicoes.checked) {
        document.querySelector('#erroCondicoes').textContent =
            'Você deve aceitar as condições da reserva.';
        formularioValido = false;
    }

    if (formularioValido) {
        const reserva = {
            nome: nome.value,
            email: email.value,
            telefone: telefone.value,
            checkin: checkin.value,
            checkout: checkout.value,
            hospedes: quantidade,
            quarto: quarto.value,
        };

        resultado.innerHTML =
            '<h2>Solicitação de reserva realizada com sucesso!</h2>' +
            '<pre>' +
            JSON.stringify(reserva, null, 2) +
            '</pre>';
    }
});
