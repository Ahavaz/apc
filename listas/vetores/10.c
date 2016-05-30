/*
 ============================================================================================================================
 Escreva um algoritmo que leia um vetor de 20 posições e mostre-o. Em seguida, troque o primeiro elemento com o último, o
 segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 20, v[t], aux;

	printf("Insira os %d valores inteiros do vetor V.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &v[i]);
	}

	printf("\nV: { ");
	for (int i = 0; i < t - 1; i++) {
		printf("%d, ", v[i]);
	}
	printf("%d }\n", v[t - 1]);

	for (int i = 0, j = t - 1 - i; i < j; i++, j--) {
		aux = v[i];
		v[i] = v[j];
		v[j] = aux;
	}

	printf("\nV em ordem invertida: { ");
	for (int i = 0; i < t - 1; i++) {
		printf("%d, ", v[i]);
	}
	printf("%d }\n", v[t - 1]);

	return 0;
}
