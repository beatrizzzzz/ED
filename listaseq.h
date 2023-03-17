#ifndef LISTASEQ_H_INCLUDED
#define LISTASEQ_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define MAX 100  

typedef struct {
     int dados[MAX]; 
     int nElementos;     
} tLista;

void cria (tLista *lista);
int vazia (tLista lista);
int cheia (tLista lista);
int tamanho (tLista lista);
int obtervalor(tLista lista, int pos, int *dado );
int inserir (tLista *lista, int pos, int dado );
int remover (tLista *lista, int pos, int *dado );

#endif
