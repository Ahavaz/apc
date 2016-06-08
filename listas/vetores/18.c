/*
 ============================================================================================================================
 Escrever um algoritmo que lê um vetor X(20). Escreva, a seguir, cada um dos valores distintos que aparecem em X dizendo
 quantas vezes cada valor aparece em X.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 20, x[t], aux, count = 1;

	printf("Insira os %d valores inteiros do vetor X.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &x[i]);
	}

	for (int i = 0; i < t - 1; i++) {
		for (int j = i + 1; j < t; j++) {
			if (x[i] > x[j]) {
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}

	int i = -1;
	while (++i < t) {
		if (x[i] != x[i + 1]) {
			printf("\nNúmero %2d: %d vez(es).", x[i], count);
			count = 1;
		} else {
			count++;
		}
	}

	return 0;
}
