#include "listaseq.h"

//1. Cria uma Lista//
void cria (tLista *lista) {
    lista->nElementos = 0;
}
//2. Verificar se está vazia//
int vazia (tLista lista) {
    if (lista.nElementos == 0)
        return 1;
    else
		return 0;
}
//3. Verificar se está cheia//
int cheia (tLista lista) {
    if (lista.nElementos == MAX)
        return 1;
    else
        return 0;
}
//4. Retorna o tamanho//
int tamanho (tLista lista) {
    return (lista.nElementos);
}

//5. Retorna o elemento de determinada posição//
int obtervalor(tLista lista, int pos, int *dado ) {
    if ((pos > lista.nElementos) || (pos <= 0))
        return 0;

   *dado = lista.dados[pos-1];
   return 1;
}

//6. Insere o elemento de determinada posição//

int inserir (tLista *lista, int pos, int valor ) {
    int  i;
    if (cheia(*lista)){
        return 0;
    }

    if ((pos < 1) || (pos > lista->nElementos+1) ){
        return 0;
    }

    for (i = lista->nElementos ; i >= pos; i--){
 		 lista->dados[i] = lista->dados[i-1];
    }

    lista->dados[pos - 1] = valor;

    (lista->nElementos)++;
    return 1;
}

//7. Remove o elemento de determinada posição//
int remover (tLista *lista, int pos, int *dado ) {
    int  i;

    
    if ((pos > lista->nElementos ) || (pos <= 0 ))
		   return 0;
    *dado = lista->dados[pos-1];

    for (i = pos - 1; i < (lista->nElementos) - 1; i++){
 		  lista->dados[i] = lista->dados[i+1];
	  }

    (lista->nElementos)--;
    return 1;
}
