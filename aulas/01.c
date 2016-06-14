/*
 ======================================================================================================================
 Crie um programa que lê 3 strings de tamanho 20 e imprime essas strings em ordem alfabética.
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n = 3, l = 21;
	char a[n][l], s[l];

	printf("Insira %d strings com até %d caracteres.\n\n", n, l - 1);

	for (int i = 0; i < n; i++) {
		fflush (stdin);
		__fpurge(stdin);
		fgets(s, l, stdin);
		strcpy(a[i], s);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (strcasecmp(a[i], a[j]) > 0) {
				strcpy(s, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], s);
			}
		}
	}

	puts("");
	for (int i = 0; i < n; i++) {
		puts(a[i]);
	}

	return 0;
}
