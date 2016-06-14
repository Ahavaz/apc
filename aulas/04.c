/*
 ============================================================================================================================
 Faça um programa que pede ao usuário para digitar uma string e troque as vogais por '*'.
 ============================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	int l = 101, len;
	char s[l], c = '*';

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	gets(s);

	len = strlen(s);
	for (int i = 0; i < len; i++) {
		switch (s[i]) {
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				s[i] = c;
		}
	}

	puts("");
	puts(s);

	return 0;
}
