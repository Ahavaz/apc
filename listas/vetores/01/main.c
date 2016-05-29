/*
 ======================================================================================================================
 Faça um programa que lê as notas de n alunos, cada nota é um inteiro entre 0 e 100, e imprima a quantidade de vezes
 com que apareceu cada nota.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0); // comando para imprimir corretamente a saída no console interno do eclipse

	int n;

	printf("Insira o número de alunos: ");
	scanf("%d", &n);

	puts("");

	int a[n];
	for (int i = 0; i < n; i++) {
		printf("Insira a nota do aluno %2d: ", i + 1);
		scanf("%d", &a[i]);
	}

	int aux;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}

	puts("");

	int count = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i + 1]) {
			printf("Há %d aluno(s) com nota: %3d\n", count, a[i]);
			count = 1;
		} else {
			count++;
		}
	}

	return 0;
}
