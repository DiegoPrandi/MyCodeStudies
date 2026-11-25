NoArv* buscarBST(NoArv* raiz, int valor){
    if (raiz == NULL){
        return NULL;
    }

    if (valor == raiz->valor){
        return raiz;
    }

    if (valor > raiz->valor){
        return buscarBST(raiz->dir, valor);
    } else {
        return buscarBST(raiz->esq, valor);
    }
}