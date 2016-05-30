/*
 ============================================================================================================================
 Faça um algoritmo que leia dois vetores: F[20] e G[20]. Calcule e mostre, a seguir, o produto dos valores de F por G.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 20, f[t], g[t], r[t];

	printf("Insira os %d valores inteiros do vetor F.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &f[i]);
	}

	printf("\nInsira os %d valores inteiros do vetor G.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &g[i]);
	}

	for (int i = 0; i < t; i++) {
		r[i] = f[i] * g[i];
	}

	printf("\nO vetor R resultante do produto entre os vetores F e G é:");
	printf("\nR: { ");

	for (int i = 0; i < t; i++) {
		if (i == t - 1) {
			printf("%d }\n", r[i]);
			break;
		}
		printf("%d, ", r[i]);
	}

	return 0;
}
