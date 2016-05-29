/*
 ======================================================================================================================
 Faça um programa que lê um número n, depois lê n números reais e o programa imprime, em relação aos números reais, o
 maior valor, o menor valor, a média e quantos números foram maiores ou iguais a média.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0); // comando para imprimir corretamente a saída no console interno do eclipse

	int n, sup = 0;

	printf("Digite a quantidade de números reais: ");
	scanf("%d", &n);

	float a[n], maior, menor, soma = 0, media;

	puts("");

	for (int i = 0; i < n; i++) {
		printf("Digite o número da posição %d: ", i + 1);
		scanf("%f", &a[i]);
		soma += a[i];
	}

	maior = a[0];
	menor = a[0];
	media = soma / n;

	for (int i = 0; i < n; i++) {
		if (a[i] > maior) {
			maior = a[i];
		}
		if (a[i] < menor) {
			menor = a[i];
		}
		if (a[i] >= media) {
			sup++;
		}
	}

	printf("\nO maior valor é %.2f\n", maior);
	printf("O menor valor é %.2f\n", menor);
	printf("A média é %.2f\n", media);
	printf("Há %d número(s) na média ou acima dela\n", sup);

	return 0;
}
