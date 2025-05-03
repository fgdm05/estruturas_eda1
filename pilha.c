#include "pilha.h"
#include <stdlib.h>
Pilha* criaPilha(int n) {
	Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
	pilha->tam = n;
	pilha->topo = -1;
	pilha->vetor = (int*) calloc(n, sizeof(int));
	return pilha;
}

int estaVazia(Pilha* pilha) {
	return pilha->topo == -1;
}

int estaCheia(Pilha* pilha) {
	return pilha->topo == (pilha->tam-1);
}

int empilha(Pilha* pilha, int valor) {
	if(estaCheia(pilha)) return ERROR_CHEIA;
	pilha->vetor[pilha->topo] = valor;
	pilha->topo++;
	return 0;
}

int olhaTopo(Pilha* pilha) {
	if(estaVazia(pilha)) return ERROR_VAZIA;
}

int desempilha(Pilha* pilha) {
	if(estaVazia(pilha)) return ERROR_VAZIA;
	pilha->topo--;
	return pilha->vetor[pilha->topo];
}

void limpaPilha(Pilha* pilha) {
	while(!estaVazia(pilha)) desempilha(pilha);
}

void destroiPilha(Pilha* pilha) {
	free(pilha);
}