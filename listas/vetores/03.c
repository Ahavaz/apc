/*
 ============================================================================================================================
 Elaborar um algoritmo que lê um conjunto de 30 valores e os coloca em 2 outros vetores conforme estes valores forem pares ou
 ímpares. O tamanho de cada vetor é de 5 posições. Avise se algum vetor estiver cheio. Terminada a leitura imprima o conteúdo
 dos dois vetores.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 30, k = 0, n, tp = 5, ti = tp, par[tp], imp[ti], p = 0, i = 0;

	printf("Insira %d valores inteiros.\n\n", t);

	while (k++ < t && p + i != tp + ti) {
		printf("Valor %2d: ", k);
		scanf("%d", &n);

		if (n % 2 == 0) {
			if (p == tp) {
				printf("O vetor dos pares está cheio.\n");
				continue;
			}
			par[p] = n;
			p++;
		} else {
			if (i == ti) {
				printf("O vetor dos ímpares está cheio.\n");
				continue;
			}
			imp[i] = n;
			i++;
		}
	}

	if (p > 0) {
		k = -1;
		printf("\nPares: { ");
		while (++k < p - 1) {
			printf("%d, ", par[k]);
		}
		printf("%d }\n", par[p - 1]);
	} else {
		printf("\nO vetor dos pares está vazio.");
	}

	if (i > 0) {
		k = -1;
		printf("\nÍmpares: { ");
		while (++k < i - 1) {
			printf("%d, ", imp[k]);
		}
		printf("%d }\n", imp[i - 1]);
	} else {
		printf("\nO vetor dos ímpares está vazio.\n");
	}

	return 0;
}
