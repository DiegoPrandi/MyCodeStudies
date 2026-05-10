import express from 'express';
import {
    listarFuncionarios,
    inserirFuncionario,
    atualizarFuncionario,
    excluirFuncionario
} from '../controllers/employeeController.js';

const router = express.Router();

router.get('/', listarFuncionarios);
router.post('/', inserirFuncionario);
router.put('/:id', atualizarFuncionario);
router.delete('/:id', excluirFuncionario);

export default router;