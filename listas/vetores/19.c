/*
 ============================================================================================================================
 Faça um algoritmo que leia um vetor A de 100 posições. Em seguida, compacte o vetor, retirando os valores nulos e
 negativos, colocando o resultado em um vetor B de 100 posições (deixe em branco as posições não utilizadas).
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 100, a[t], b[t], j = 0;

	printf("Insira os %d valores inteiros do vetor A.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < t - 1; i++) {
		if (a[i] > 0) {
			b[j++] = a[i];
		}
	}

	if (j > 0) {
		int i = -1;
		printf("\nB = { ");
		while (++i < j - 1) {
			printf("%d, ", b[i]);
		}
		printf("%d }\n", b[i]);
	} else {
		printf("\nNão há valores em B.\n");
	}

	return 0;
}
