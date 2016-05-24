/* Escreva um programa que recebe 3 strings com tamanho 20 e imprime-as em ordem crescente */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
	int n = 3, l = 21;
	char a[n][l], s[l];

	printf ("Insira %d strings com até %d caracteres.\n\n", n, l-1);

	for(int i = 0; i < n; i++) {
		gets(s);
		strcpy(a[i], s);
	}

	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(strcmp(a[i], a[j]) > 0) {
				strcpy(s, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], s);
			}
		}
	}

	puts("");
	for(int i = 0; i < n; i++) {
		puts(a[i]);
	}

	return 0;
}
