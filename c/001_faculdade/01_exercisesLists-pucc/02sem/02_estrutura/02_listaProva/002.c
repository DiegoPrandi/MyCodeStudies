int contarNos(NoArv* raiz){
    if (raiz == NULL){
        return 0;
    }

    return 1 + contarNos(raiz->esq) + contarNos(raiz->dir);
}