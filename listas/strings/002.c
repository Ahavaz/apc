/*
 ============================================================================================================================
 Faça um programa que lê uma string e conta quantas vogais existem.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len, c = 0, i;
	char s[l];

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	gets(s);

	len = strlen(s);
	for (i = 0; i < len; i++) {
		switch (s[i]) {
			case 'A':
			case 'a':
				c++;
				break;
			case 'E':
			case 'e':
				c++;
				break;
			case 'I':
			case 'i':
				c++;
				break;
			case 'O':
			case 'o':
				c++;
				break;
			case 'U':
			case 'u':
				c++;
		}
	}

	puts("");
	puts(i);

	return 0;
}
