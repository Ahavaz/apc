/*
 ============================================================================================================================
 Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo vetor, substituindo os valores nulos por 1.
 Mostre os 2 vetores.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 30, v[t], n[t], i;

	printf("Insira os %d valores inteiros do vetor V.\n", t);

	for (i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &v[i]);

		if (v[i] == 0) {
			n[i] = 1;
		} else {
			n[i] = v[i];
		}
	}

	i = -1;
	printf("\nV: { ");
	while (++i < t - 1) {
		printf("%d, ", v[i]);
	}
	printf("%d }\n", v[i]);

	i = -1;
	printf("\nN: { ");
	while (++i < t - 1) {
		printf("%d, ", n[i]);
	}
	printf("%d }\n", n[i]);

	return 0;
}
