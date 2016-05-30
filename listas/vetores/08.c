/*
 ============================================================================================================================
 Escreva um algoritmo que leia e mostre um vetor de 20 números. A seguir, conte quantos valores pares existem no vetor.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 20, v[t], p = 0;

	printf("Insira os %d valores inteiros do vetor V.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &v[i]);
		if (v[i] % 2 == 0) {
			p++;
		}
	}

	printf("\nV: { ");

	for (int i = 0; i < t; i++) {
		if (i == t - 1) {
			printf("%d }\n", v[i]);
			break;
		}
		printf("%d, ", v[i]);
	}

	printf("Há %d valor(es) par no vetor V.\n", p);

	return 0;
}
