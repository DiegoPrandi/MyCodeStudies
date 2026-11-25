int contarFolhas(NoArv* raiz){
    if (raiz == NULL){
        return 0;
    }

    if (raiz->esq == NULL && raiz->dir == NULL){
        return 1;
    }

    return contarFolhas(raiz->res) + contarFolhas(raiz->dir);
}