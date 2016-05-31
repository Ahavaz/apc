/*
 ============================================================================================================================
 Escrever um algoritmo que gera os 30 primeiros números primos a partir de 100 e os armazena em um vetor de X [100]
 escrevendo, no final, o vetor X.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int t = 100, l = 30, x[t], k = 0;
//	int n = 200, p[t], w = 0, y;

	for (int i = t; k < l; i++) {
		for (int j = i / 2; j > 1; j--) {
			if (i % j == 0) {
				break;
			}
			if (j == 2) {
				x[k++] = i;
			}
		}
	}

	int i = -1;
	printf("X: { ");
	while (++i < k - 1) {
		printf("%d, ", x[i]);
	}
	printf("%d }\n\n", x[i]);

//	p[k++] = 2;
//	for (int i = 3; i < n + 1; i++) {
//		for (int j = i / 2; j > 1; j--) {
//			if (i % j == 0) {
//				break;
//			}
//			if (j == 2) {
//				p[k++] = i;
//			}
//		}
//	}
//
//	int i = -1;
//	printf("Primos até %d: { ", n);
//	while (++i < k - 1) {
//		printf("%d, ", p[i]);
//	}
//	printf("%d }\n\n", p[i]);
//
//	k = 0;
//	while (k < l) {
//		if (t % p[k++] == 0) {
//			continue;
//		}
//		if (p[k] == t / 2) {
//			x[k] = t;
//		}
//	}
//
//	for (int i = t; w < l; i++) {
//		k = 0;
//		y = k;
//		for (int j = t / 2; p[k] < j; k++) {
//			if (i % p[k] != 0) {
//				y++;
//			}
//		}
//		if (y == k - 1) {
//			x[w++] = i;
//		}
//	}
//
//	i = -1;
//	printf("%d primos a partir de %d: { ", l, t);
//	while (++i < w - 1) {
//		printf("%d, ", x[i]);
//	}
//	printf("%d }\n", x[i]);

	return 0;
}
