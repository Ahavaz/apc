/*
 ============================================================================================================================
 Escrever um algoritmo que gera os 30 primeiros números primos a partir de 100 e os armazena em um vetor de X [30]
 escrevendo, no final, o vetor X.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int t = 100, l = 30, x[l], k = 0;

	for (int i = t; k < l; i++) {
		for (int j = i / 2; j > 0; j--) {
			if (i % j == 0 && j != 1) {
				break;
			}
			if (j == 1) {
				x[k++] = i;
			}
		}
	}

	int i = -1;
	printf("X: { ");
	while (++i < k - 1) {
		printf("%d, ", x[i]);
	}
	printf("%d }\n\n", x[i]);

	return 0;
}
