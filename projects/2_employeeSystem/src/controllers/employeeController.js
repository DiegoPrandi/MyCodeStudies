import db from '../config/db.js'

export const listarFuncionarios = (req, res) => {   
    db.query('SELECT * FROM employees', (err, results) => {
        if (err) return res.status(500).json({erro: 'Erro ao buscar funcionários'});
            res.json(results);
    })
}

export const inserirFuncionario = (req, res) => {
    const {name, position, salary} = req.body;
    
    if (!name || !position || !salary) {
        return res.status(400).json({erro: 'Name, position e salary são obrigatórios'});
    }
    
    const sql = 'INSERT INTO employees (name, position, salary) VALUES (?,?,?)';
    console.log('Inserindo:', {name, position, salary});
    
    db.query(sql, [name, position, salary], (err, results) =>{
        if (err) {
            console.error('Erro ao inserir:', err);
            return res.status(500).json({erro: 'Erro ao inserir funcionário', detalhes: err.message});
        }
        res.json({mensagem: 'Funcionário inserido com sucesso!'})
    });
}

