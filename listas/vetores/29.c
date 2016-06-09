/*
 ============================================================================================================================
 Escreva um programa que imprime um Triângulo de Pascal de ordem n (n lido). O programa deve usar apenas um vetor.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t = 100, n, p[t];
	char c = ' ';

	printf("Insira o valor de N: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n; j++) {
			if (i == n) {

			}
			p[i][j] = 1;
		}
		puts("");
	}

	puts("");
	puts (s);

	return 0;
}
