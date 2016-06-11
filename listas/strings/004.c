/*
 ============================================================================================================================
 Faça um programa que pede ao usuário para digitar uma string e delete as vogais.
 ============================================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	int l = 101, len;
	char s[l];

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	fgets(s, l, stdin);

	len = strlen(s);
	for (int i = 0; i < len; i++) {
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
			for (int j = i; j < len; j++) {
				s[j] = s[j + 1];
			}
		}
	}

	puts(s);

	return 0;
}
