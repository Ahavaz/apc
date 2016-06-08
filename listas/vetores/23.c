/*
 ============================================================================================================================
 Uma locadora de vídeos tem guardada, em um vetor de 500 posições, a quantidade de filmes retirados por seus clientes durante
 o ano de 2014. Agora, esta locadora está fazendo uma promoção e, para cada 10 filmes retirados, o cliente tem direito a uma
 locação grátis. Faça um algoritmo que crie um outro vetor contendo a quantidade de locações gratuitas a que cada cliente tem
 direito.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 500, q[t], g[t];

	printf("Insira os %d valores das quantidades de filmes retirados.\n", t);

	for (int i = 0; i < t; i++) {
		printf("Cliente %3d: ", i + 1);
		scanf("%d", &q[i]);
		g[i] = q[i] / 10;
	}

	printf("\nQuantidade de locações gratuitas.");
	int i = -1;
	while (++i < t) {
		printf("\nCliente %3d: %d", i + 1, g[i]);
	}

	return 0;
}
