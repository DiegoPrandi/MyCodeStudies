int menorBST(NoArv* raiz){
    if (raiz->esq == NULL){
        return raiz->valor;
    }

    return menorBST(raiz->esq);
}