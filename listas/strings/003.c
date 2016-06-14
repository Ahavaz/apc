/*
 ============================================================================================================================
 Faça um programa que lê uma string e verifica se ela é palíndrome.
 ============================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	int l = 101, len;
	char s[l];
	_Bool b = 1;

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);

	fgets(s, l, stdin);

	len = strlen(s) - 1;
	for (int i = 0, j = len - i - 1; i < j; i++, j--) {
		if (s[i] != s[j]) {
			b = 0;
			break;
		}
	}

	b ? printf("A string é palíndrome.") : printf("A string não é palíndrome.");

	return 0;
}
