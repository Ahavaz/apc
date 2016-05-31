/*
 ============================================================================================================================
 Escreva um algoritmo que leia um vetor de 13 elementos, que é o Gabarito de um teste da loteria esportiva, contendo os
 valores 1 (coluna 1), 2 (coluna 2) e 3 (coluna do meio). Leia, a seguir, para cada apostador, o número do seu cartão e um
 vetor de Respostas de 13 posições. Verifique para cada apostador o números de acertos, comparando o vetor de Gabarito com o
 vetor de Respostas. Escreva o número do apostador e o número de acertos. Se o apostador tiver 13 acertos, mostrar a mensagem
 "Ganhador".
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 5, n = 10, c, g[t], r[t], acertos;

	printf("Insira os %d valores do gabarito da loteria.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &g[i]);
	}

	for (int i = 0; i < n; i++) {
		acertos = 0;
		printf("\nInsira o número do cartão do apostador: ");
		scanf("%d", &c);

		printf("Insira as respostas do apostador %d.\n", c);

		for (int j = 0; j < t; j++) {
			printf("Posição %2d: ", j + 1);
			scanf("%d", &r[j]);

			if (r[j] == g[j]) {
				acertos++;
			}
		}

		printf("Apostador %d: %2d acerto(s)\n", c, acertos);

		if (acertos == t) {
			printf("Ganhador\n");
		}
	}

	return 0;
}
