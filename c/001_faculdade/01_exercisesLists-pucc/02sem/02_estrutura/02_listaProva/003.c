int altura(NoArv* raiz){
    if (raiz == NULL){
        return -1;
    }


    if (altura(raiz->esq) > altura(raiz->dir)){
        return altura(raiz->esq) +1;
    }else {
        return altura(raiz->dir) +1;
    }
}