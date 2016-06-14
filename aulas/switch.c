#include <stdio.h>
#include <math.h>

int main(void) {
	int opcao;
	float x, y;
	printf("Insira o valor de X: ");
	scanf("%f", &x);

	printf("Insira o valor de Y: ");
	scanf("%f", &y);

	do {
		puts("\nEscolha uma opção: ");
		puts("1 - Soma de X e Y.");
		float soma = x + y;
		puts("2 - Produto entre X e o quadrado de Y.");
		float produto = x * y * y;
		puts("3 - Raiz quadrada da soma dos quadrados de X e Y.");
		float raiz = sqrt(x * x + y * y);
		puts("4 - Seno da diferença de X e Y.");
		float seno = sin(x - y);
		puts("5 - Sair.");

		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			printf("X + Y = %.2f + %.2f = %.2f", x, y, soma);
			break;
		case 2:
			printf("X * Y^2 = %.2f * (%.2f)^2 = %.2f", x, y, produto);
			break;
		case 3:
			printf("sqrt(X^2 + Y^2) = sqrt[(%.2f)^2 + (%.2f)^2] = %.2f", x, y, raiz);
			break;
		case 4:
			printf("sen(X - Y) = sen(%.2f - %.2f) = %.2f", x, y, seno);
			break;
		case 5:
			printf("Saindo...");
			break;
		default:
			printf("\nSeleção inválida.");
		}
		puts("");
	} while (opcao != 5);

	return 0;
}
