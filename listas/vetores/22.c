/*
 ============================================================================================================================
 Faça um algoritmo que leia dois vetores (A e B) de 50 números. O algoritmo deve, então, subtrair o primeiro elemento de A
 do último de B, acumulando o valor, subtrair o segundo elemento de A do penúltimo de B, acumulando o valor, e assim por
 diante. Mostre o resultado da soma final.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 50, a[t], b[t], soma = 0;

	printf("Insira os %d valores inteiros do vetor A.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\nInsira os %d valores inteiros do vetor B.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &b[i]);
	}

	for (int i = 0, j = t - 1 - i; i < t; i++, j--) {
		soma += b[j] - a[i];
	}

	printf("\nSoma: %d", soma);

	return 0;
}
