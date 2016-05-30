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
	int t = 30, k = t, n, par[5], imp[5], p = 0, i = 0;

	printf("Insira %d valores inteiros.\n\n", t);

	while (t-- > 0 && p + i != 10) {
		printf("Valor %2d: ", k - t);
		scanf("%d", &n);

		if (n % 2 == 0) {
			if (p == 5) {
				printf("O vetor dos pares está cheio.\n");
				continue;
			}
			par[p] = n;
			p++;
		} else {
			if (i == 5) {
				printf("O vetor dos ímpares está cheio.\n");
				continue;
			}
			imp[i] = n;
			i++;
		}
	}

	if (p > 0) {
		k = p - 1;
		printf("\nPares: { ");

		while (p-- > 0) {
			if (p == 0) {
				printf("%d }", par[k - p]);
				break;
			}
			printf("%d, ", par[k - p]);
		}
	} else {
		printf("\nO vetor dos pares está vazio.");
	}

	if (i > 0) {
		k = i - 1;
		printf("\nÍmpares: { ");

		while (i-- > 0) {
			if (i == 0) {
				printf("%d }\n", imp[k - i]);
				break;
			}
			printf("%d, ", imp[k - i]);
		}
	} else {
		printf("\nO vetor dos ímpares está vazio.\n");
	}

	return 0;
}
