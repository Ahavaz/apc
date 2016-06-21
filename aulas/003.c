/*
============================================================================================================================
Faça um programa que lê uma string e verifica se ela é palíndrome.
============================================================================================================================
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int l = 101, len;
	char s[101];
	_Bool b = 1;

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	gets(s);

	len = strlen(s);
	for (int i = 0, j = len - 1 - i; i < j; i++, j--) {
		if (s[i] != s[j]) {
			b = 0;
			break;
		}
	}

	b ? printf("\nA string é palíndrome.\n") : printf("\nA string não é palíndrome.\n");

	return 0;
}
