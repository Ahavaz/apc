/*
======================================================================================================================
Faça um programa que leia uma string do teclado e diga se ela é palíndrome. Uma string é palíndrome quando pode ser 
lida tanto de trás pra frente quanto de frente para trás e possui exatamente a mesma sequência de caracteres.
Ex.: ASA, RADAR.
======================================================================================================================
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
