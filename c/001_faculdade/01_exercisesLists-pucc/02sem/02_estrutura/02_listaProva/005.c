void mostrarEmOrdem(NoArv* raiz) {
    if (raiz == NULL){
        return;
    }

    mostrarEmOrdem(raiz->esq);
    printf("%d", raiz->valor);
    mostrarEmOrdem(raiz->dir);
}