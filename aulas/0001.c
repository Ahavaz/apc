/*
 ======================================================================================================================
 Escreva um programa em C que leia uma matriz 3x3 de inteiros. Verifique se essa matriz é um quadrado mágico. Exemplo:
 {{ 8,  0,  7 },
  { 4,  5,  6 },
  { 3, 10,  2 }}
 Soma de cada linha/cada coluna/cada diagonal tem o mesmo valor.
 ======================================================================================================================
 */

#include <stdio.h>

int main() {
	int m, n, k = 0;

	printf("Digite o número de linhas: ");
	scanf("%d", &m);
	printf("Digite o número de colunas: ");
	scanf("%d", &n);
	int a[m][n];

	while (k < m) {
		for (int i = k; i + k < m; i++) {
			for (int j = k; j + k < n; j++) {
				a[i][j] = k + 1;
			}
		}
		k++;
	}

	puts("");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", a[i][j]);
		}
		puts("\n");
	}

	return 0;
}
