/*
 ============================================================================================================================
 Uma frase/palavra é dita ser palíndrome, se ela é a mesma se lida da esquerda para a direita e a mesma que lida da direita
 para a esquerda. Faça um programa que lê uma cadeia de caracteres e diz se a cadeia é palíndrome ou não.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	int l = 101, len;
	char s[l];
	_Bool b = 1;

	printf("Insira uma string com até %d caracteres.\n", l - 1);
	gets(s);

	len = strlen(s);
	for (int i = 0, j = len - i - 1; i < j; i++, j--) {
		if (s[i] != s[j]) {
			b = 0;
			break;
		}
	}

	b ? printf("\nA string é palíndrome.") : printf("\nA string não é palíndrome.");

	return 0;
}
