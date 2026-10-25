import express = require('express');

const app = express();
const PORT = 3000;

app.use(express.json());

app.get('/', (req, res) => {
    res.send('Servidor backend funcionando!');
});

app.listen(PORT, () => {
    console.log(`Servidor BACKEND rodando em http://localhost:${PORT}`);
});
