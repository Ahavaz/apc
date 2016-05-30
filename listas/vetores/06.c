/*
 ============================================================================================================================
 Faça um algoritmo que leia um vetor S[20] e uma variável A. A seguir, mostre o produto da variável A pelo vetor.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 20, s[t], a, r[t];

	printf("Insira o valor inteiro da variável A: ");
	scanf("%d", &a);

	printf("\nInsira os %d valores inteiros do vetor S.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &s[i]);

		r[i] = a * s[i];
	}

	printf("\nO vetor R resultante do produto de A pelo vetor S é:");
	printf("\nR: { ");
	for (int i = 0; i < t - 1; i++) {
		printf("%d, ", r[i]);
	}
	printf("%d }\n", r[t - 1]);

	return 0;
}
