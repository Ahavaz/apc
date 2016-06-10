/*
 ============================================================================================================================
 Escreva um programa que imprime um Triângulo de Pascal de ordem n (n lido). O programa deve usar apenas um vetor.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k = 0;

	do {
		printf("Insira o valor de N (menor que 35): ");
		fflush (stdin);
		scanf("%d", &n);
	} while (n > 34);

	int t = n * (n + 1) / 2, p[t];

	puts("\n\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (i == 0 || j == 0) {
				p[k] = 1;
				printf("%10d ", p[k++]);
			} else {
				p[k] = p[k - 1] + p[k - 1 - n + i];
				printf("%10d ", p[k++]);
			}
		}
		puts("\n\n\n\n");
	}

	return 0;
}
