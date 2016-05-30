/*
 ======================================================================================================================
 Faça um programa que lê uma string e a imprime invertida.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len;
	char s[l], aux;

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);

	gets(s);

	len = strlen(s);
	for (int i = 0, j = len - i - 1; i < j; i++, j--) {
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
	}

	puts("");
	puts(s);

	return 0;
}
