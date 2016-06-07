/*
 ============================================================================================================================
 Faça um programa que lê uma string e verifica se ela é palíndrome.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len, c = 0;
	char s[l], aux;

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);

	gets(s);

	len = strlen(s);
	for (int i = 0, j = len - i - 1; i < j; i++, j--) {
		if (s[i] != s[j]) break;
		c++;
	}

    if (c == len) {
	    puts("A string é palíndrome");
    } else {
        puts("A string não é palíndrome");
    }

	return 0;
}
