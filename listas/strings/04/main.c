/*
 ======================================================================================================================
 Faça um programa que pede ao usuário para digitar uma string e troque as vogais por '*'.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0); // comando para imprimir corretamente a saída no console interno do eclipse

	int l = 101, len;
	char s[l], c = '*';

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	gets(s);

	len = strlen(s);
	for (int i = 0; i < len; i++) {
		switch (s[i]) {
			case 'A':
			case 'À':
			case 'Á':
			case 'Â':
			case 'Ã':
			case 'a':
			case 'à':
			case 'á':
			case 'â':
			case 'ã':
				s[i] = c;
				break;
			case 'E':
			case 'É':
			case 'Ê':
			case 'e':
			case 'é':
			case 'ê':
				s[i] = c;
				break;
			case 'I':
			case 'Í':
			case 'i':
			case 'í':
				s[i] = c;
				break;
			case 'O':
			case 'Ó':
			case 'Ô':
			case 'Õ':
			case 'o':
			case 'ó':
			case 'ô':
			case 'õ':
				s[i] = c;
				break;
			case 'U':
			case 'Ú':
			case 'u':
			case 'ú':
				s[i] = c;
		}
	}

	puts("");
	puts(s);

	return 0;
}
