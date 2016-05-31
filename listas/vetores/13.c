/*
 ============================================================================================================================
 Escreva um algoritmo que leia um vetor G de 20 caracteres que representa o gabarito de uma prova. A seguir, para cada um dos
 50 alunos da turma, leia o vetor de respostas (R) do aluno e conte o número de acertos. Mostre o número de acertos do aluno
 e uma mensagem de APROVADO, se a nota for maior ou igual a 6; caso contrário, mostre uma mensagem de REPROVADO.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int q = 20, n = 50, t = q + 1, acertos;
	char g[q], r[q];
	float nota, media = 6.0;

	printf("Insira o gabarito das %d questões.\n", q);

	for (int i = 0; i < t; i++) {
		g[i] = getchar();
	}

	for (int i = 0; i < n; i++) {
		acertos = -1;
		printf("\nInsira as respostas do aluno %2d.\n", i + 1);

		for (int j = 0; j < t; j++) {
			r[j] = getchar();

			if (r[j] == g[j]) {
				acertos++;
			}
		}

		printf("%d acertos: ", acertos);
		nota = 10.0 * acertos / q;
		if (nota < media) {
			puts("REPROVADO");
		} else {
			puts("APROVADO");
		}
	}

	return 0;
}
