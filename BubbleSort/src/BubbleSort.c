/*
 ============================================================================
 Name        : BubbleSort.c
 Author      : Roberto S. Ramos Jr
 Version     :
 Copyright   : robertosrjr@gmail.com
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define tamanho 10

int vec[] = {12, 58, 16, 38, 31, 23, 37, 11, 42, 27};

int main(void) {

	int qtde = 0;
	printf("Imprimir vector desordenado: ");
	print_vector();
	printf("\n");

	qtde = bubbleSort(vec);
	printf("Imprimir vector ordenado: ");
	print_vector();
	printf("\n");

	printf("Quantidade de Iterações: %d", qtde);

	return EXIT_SUCCESS;
}

int bubbleSort(int vec[]) {

	int qtd, i, j, tmp;
	qtd = 0;
	for (i = 0; i < tamanho -1; i++) {

		for (j = i+1; j < tamanho; j++) {

			if (vec[i] > vec[j]) {
				troca(&vec[i], &vec[j]);
			}
			qtd++;
		}
	}
	return(qtd);
}

void troca(int* a, int* b) {

	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void print_vector() {

	int i;
	for (i = 0; i < tamanho -1; i++) {

		printf("%d, ", vec[i]);
	}
}
