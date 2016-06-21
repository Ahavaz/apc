/*
======================================================================================================================
Escreva um programa que solicite ao usuário para digitar seu nome completo e armazene em uma string. Em seguida conte
quantas vogais existem nessa string.
======================================================================================================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int len, v = 0, i;
	char s[101];

	printf("Insira seu nome completo: ");
	gets(s);

	len = strlen(s);
	for (i = 0; i < len; i++) {
		switch (s[i]) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				v++;
		}
	}

	printf("\nSeu nome contém %d vogal(is).\n\n", v);

	return 0;
}
