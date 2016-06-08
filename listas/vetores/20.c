/*
 ============================================================================================================================
 Faça um algoritmo que leia um vetor de 10 posições de números e divida todos os seus elementos pelo maior valor do vetor.
 Mostre o vetor após os cálculos.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 10;
	float v[t], m;

	printf("Insira os %d valores reais do vetor V.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%f", &v[i]);
	}

	m = v[0];
	for (int i = 0; i < t; i++) {
		if (m < v[i]) {
			m = v[i];
		}
	}

	for (int i = 0; i < t; i++) {
		v[i] /= m;
	}

	int i = -1;
	printf("\nV = { ");
	while (++i < t - 1) {
		printf("%.2f, ", v[i]);
	}
	printf("%.2f }\n", v[i]);

	return 0;
}
