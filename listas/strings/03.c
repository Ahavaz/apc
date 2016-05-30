/*
 ======================================================================================================================
 Faça um programa que recebe uma string e um caractere e conte quantas vezes o caractere aparece na string.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len, k = 0;
	char s[l], c;

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);

	gets(s);

	printf("\nInsira um caractere: ");
	c = getchar();

	len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] == c) {
			k++;
		}
	}

	printf("\nO caractere '%c' aparece %d vezes.", c, k);

	return 0;
}
