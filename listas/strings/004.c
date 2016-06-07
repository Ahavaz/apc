/*
 ============================================================================================================================
 Faça um programa que pede ao usuário para digitar uma string e delete as vogais.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len, j;
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
                    for (j = i + 1; j < len + 1; j++) {
                        s[j-1] = s[j];
                    }
		}
	}

	puts(s);

	return 0;
}
