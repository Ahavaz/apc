/*
 ============================================================================================================================
 Faça um programa que lê uma string e conta quantas vogais existem.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len, c = 0;
	char s[l];

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	fgets(s, l, stdin);

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
				c++;
		}
	}

	printf("A string contem %d vogais.", c);

	return 0;
}
