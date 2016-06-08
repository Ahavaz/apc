/*
 ============================================================================================================================
 Faça um algoritmo que leia um vetor A[10]. Preencha então um vetor B[10] com o fatorial de cada valor de A respeitando as
 posições, caso o referido valor for positivo ou nulo. Deixe os valores negativos intactos. Mostre o vetor B.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 10, a[t], b[t], f, n;

	printf("Insira os %d valores inteiros do vetor A.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %d: ", i + 1);
		scanf("%d", &a[i]);
		f = a[i];
		n = f;
		while (n > 2) {
			f *= --n;
		}
		if (f == 0) {
			f = 1;
		}
		b[i] = f;
	}

	int i = -1;
	printf("\nB: { ");
	while (++i < t - 1) {
		printf("%d, ", b[i]);
	}
	printf("%d }\n", b[i]);

	return 0;
}
