#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pilha.h"


int main() {
	srand(time(NULL));
	printf("Defina o tamanho da pilha aleatoria: ");
	int n; scanf("%i", &n);
	if(n <= 0) { printf("\nValor inválido\n"); return -1; }
	Pilha* pilha = criaPilha(n);
	
	for(int i = 0; i < pilha->tam; i++) {
		int ra = rand() % 99 + 1;
		printf("Empilhando: %i\n", ra);
		int rt = empilha(pilha, ra);
		if(rt == ERROR_CHEIA) {
			printf("Erro ao empilhar %i: pilha cheia", ra);
			return 0;
		}
	}
	for(int i = 0; i < pilha->tam; i++) {
		int rt = desempilha(pilha);
		if(rt == ERROR_VAZIA) {
			printf("Erro ao desempilhar: pilha vazia");
			return 0;
		}
		printf("Desempilhando: %i\n", rt);
	}
	destroiPilha(pilha);
	printf("\nFIM\n");
	return 0;
}