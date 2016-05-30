/*
 ============================================================================================================================
 Escreva um algoritmo que leia 50 valores para um vetor de 50 posições. Mostre depois somente os positivos.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 5, v[t], p[t], k = 0;

	printf("Insira os %d valores inteiros do vetor V.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &v[i]);

		if (v[i] > 0) {
			p[k++] = v[i];
		}
	}

	if (k > 0) {
		int i = -1;
		printf("\nValores positivos: { ");
		while (++i < k - 1) {
			printf("%d, ", p[i]);
		}
		printf("%d }\n", p[i]);
	} else {
		printf("\nNão há valores positivos em V.\n");
	}

	return 0;
}
