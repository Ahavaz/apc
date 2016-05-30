/*
 ============================================================================================================================
 Escreva um algoritmo que leia um vetor de 100 posições e mostre-o ordenado em ordem crescente.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 100, v[t];

	printf("Insira os %d valores inteiros do vetor V.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &v[i]);
	}

	int aux;
	for (int i = 0; i < t - 1; i++) {
		for (int j = i + 1; j < t; j++) {
			if (v[i] > v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	printf("\nO vetor V em ordem crescente é: { ");
	for (int i = 0; i < t - 1; i++) {
		printf("%d, ", v[i]);
	}
	printf("%d }\n", v[t - 1]);

	return 0;
}
