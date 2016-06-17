/*
======================================================================================================================
Escreva um programa em C que lê uma matriz de inteiros M(6,6). Conte e exiba a quantidade de números maiores do que 10
e pares existentes na matriz.
======================================================================================================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, j, k = 0, l = 6, m[l][l];

	printf("Insira os valores da matriz M de tamanho %d.\n\n", l);

	for (i = 0; i < l; i++) {
		for (j = 0; j < l; j++) {
			printf("Digite o valor da posição M[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);

			if(m[i][j] > 10 && m[i][j] % 2 == 0)
				k++;
		}
	}

	puts("\n");
	for (i = 0; i < l; i++) {
		for (j = 0; j < l; j++) {
			printf("%3d ", m[i][j]);
		}
		puts("\n");
	}

	printf("\nA matriz M possui %d valor(es) maior(es) do que 10 e par(es).\n\n", k);

	return 0;
}
