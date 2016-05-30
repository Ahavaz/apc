/*
 ============================================================================================================================
 Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, colocando o
 resultado em um terceiro vetor. Mostre o vetor resultante.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 3, a[t], b[t], r[t];

	printf("Insira os %d valores inteiros do vetor A.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\nInsira os %d valores inteiros do vetor B.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < t; i++) {
		r[i] = a[i] * b[i];
	}

	printf("\nO vetor R resultante do produto entre os vetores A e B é:");
	printf("\nR: { ");

	for (int i = 0; i < t; i++) {
		if (i == t - 1) {
			printf("%d }\n", r[i]);
			break;
		}
		printf("%d, ", r[i]);
	}

	return 0;
}
