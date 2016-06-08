/*
 ============================================================================================================================
 Faça um algoritmo que leia um vetor de 10 posições. Mostre então os 3 menores valores do vetor.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 10, m = 3, v[t], aux;

	printf("Insira os %d valores inteiros do vetor V.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &v[i]);
	}

	for (int i = 0; i < m; i++) {
		for (int j = i + 1; j < t; j++) {
			if (v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	int i = -1;
	printf("\nV = { ");
	while (++i < m - 1) {
		printf("%d, ", v[i]);
	}
	printf("%d }\n", v[i]);

	return 0;
}
