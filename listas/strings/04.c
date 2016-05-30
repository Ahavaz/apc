/*
 ======================================================================================================================
 Faça um programa que pede ao usuário para digitar uma string e troque as vogais por '*'.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len;
	char s[l], c = '*';
	
	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	gets(s);

	len = strlen(s);
	for (int i = 0; i < len; i++) {
		switch ((unsigned char)s[i]) {
			case 'A':
			case 'a':
				s[i] = c;
				break
			case 'E':
			case 'e':
				s[i] = c;
				break;
			case 'I':
			case 'i':
				s[i] = c;
				break;
			case 'O':
			case 'o':
				s[i] = c;
				break;
			case 'U':
			case 'u':
				s[i] = c;
		}
	}

	puts("");
	puts(s);

	return 0;
}
