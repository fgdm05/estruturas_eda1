#ifndef PILHA_H
#define PILHA_H

typedef struct pilha {
	int topo;
	int tam;
	int* vetor;
} Pilha;

#define ERROR_CHEIA -1
#define ERROR_VAZIA -2

Pilha* criaPilha(int n);
int estaVazia(Pilha* pilha);
int estaCheia(Pilha* pilha);
int empilha(Pilha* pilha, int valor);
int olhaTopo(Pilha* pilha);
int desempilha(Pilha* pilha);
void limpaPilha(Pilha* pilha);
void destroiPilha(Pilha* pilha);

#endif