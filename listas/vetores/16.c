/*
 ============================================================================================================================
 Escrever um algoritmo que lê 2 vetores X(10) e Y(10). Crie, a seguir, um vetor Z que seja:
 a) a diferença entre X e Y;
 b) a soma entre X e Y;
 c) o produto entre X e Y.
 Escreva o vetor Z a cada cálculo.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int t = 10, x[t], y[t], z[t];

	printf("Insira os %d valores inteiros do vetor X.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &x[i]);
	}

	printf("\nInsira os %d valores inteiros do vetor Y.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &y[i]);
	}

	// Diferença
	for (int i = 0; i < t; i++) {
		z[i] = x[i] - y[i];
	}

	int i = -1;
	printf("\nX - Y = { ");
	while (++i < t - 1) {
		printf("%d, ", z[i]);
	}
	printf("%d }\n", z[i]);

	// Soma
	for (int i = 0; i < t; i++) {
		z[i] = x[i] + y[i];
	}

	i = -1;
	printf("\nX + Y = { ");
	while (++i < t - 1) {
		printf("%d, ", z[i]);
	}
	printf("%d }\n", z[i]);

	// Produto
	for (int i = 0; i < t; i++) {
		z[i] = x[i] * y[i];
	}

	i = -1;
	printf("\nX * Y = { ");
	while (++i < t - 1) {
		printf("%d, ", z[i]);
	}
	printf("%d }\n", z[i]);

	return 0;
}
