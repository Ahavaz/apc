/*
 ============================================================================================================================
 Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N e a sua posição dentro do vetor,
 mostrando: “O menor elemento de N é”, M, “e sua posição dentro do vetor é:”,P.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 20, n[t], m, p;

	printf("Insira %d valores inteiros.\n\n", t);

	printf("Posição  1: ");
	scanf("%d", &n[0]);
	m = n[0];
	p = 1;

	for (int i = 1; i < t; i++) {
		printf("Posição %2d: ", i + 1);
		scanf("%d", &n[i]);
		if (m > n[i]) {
			m = n[i];
			p = i + 1;
		}
	}

	printf("\nO menor elemento de N é %d e sua posição dentro do vetor é: %d.\n", m, p);

	return 0;
}
