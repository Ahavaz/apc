/*
 ============================================================================================================================
 Faça um programa que lê uma cadeia de caracteres e transforma a cadeia de caracteres na mesma cadeia, mas com as letras
 transformadas para minúsculas. Em seguida imprime a cadeia de caracteres resultante.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int t = 100, l = 0;
	char s[t], c;

	printf("Insira uma string com até %d caracteres.\n", t);

	while (l < t) {
		c = getchar();
		if (c == '\n') {
			break;
		}
		if (64 < c && c < 91) {
			c += 32;
		}
		s[l++] = c;
	}

	int i = -1;
	while (++i < l) {
		printf("%c", s[i]);
	}

	return 0;
}
