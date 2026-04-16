import express from 'express';
import {listarFuncionarios,inserirFuncionario} from '../controllers/employeeController.js';

const router = express.Router();

router.get('/', listarFuncionarios);
router.post('/', inserirFuncionario);

export default router;