/*
 ============================================================================================================================
 Escrever um algoritmo que lê um vetor K(15). Crie, a seguir, um vetor P, que contenha todos os números primos de K. Escreva
 o vetor P.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int t = 15, k[t], p[t], c = 0, n = 0;

	printf("Insira os %d valores inteiros do vetor K.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &k[i]);
	}

	for (int i = 0; i < t; i++) {
		c = k[i];
		for (int j = c / 2; j > 0; j--) {
			if (c % j == 0 && j != 1) {
				break;
			}
			if (j == 1) {
				p[n++] = c;
			}
		}
	}
	int i = -1;
	printf("\nP: { ");
	while (++i < n - 1) {
		printf("%d, ", p[i]);
	}
	printf("%d }\n\n", p[i]);

	return 0;
}
