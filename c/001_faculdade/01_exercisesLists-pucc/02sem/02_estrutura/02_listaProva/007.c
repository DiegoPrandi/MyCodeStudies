void espelhaArvore(NoArv* raiz) {
    if (raiz == NULL)
        return;

    NoArv* temp = raiz->esq;
    raiz->esq = raiz->dir;
    raiz->dir = temp;

    espelhaArvore(raiz->esq);
    espelhaArvore(raiz->dir);
}