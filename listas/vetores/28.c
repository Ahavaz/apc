/*
 ============================================================================================================================
 Faça um programa que lê um inteiro k e uma cadeia de caracteres criptografada pela cifra de César com parâmetro k (veja
 exercício anterior) e imprime a mensagem descriptografada.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t = 101, k, l = 0, len;
	char s[t], c;

	printf("Insira o valor de K: ");
	scanf("%d", &k);

	printf("Insira a string com até %d caracteres a ser descriptografada.\n", t - 1);
	fflush (stdin);
	__fpurge(stdin);
	fgets(s, t, stdin);

	len = strlen(s);
	while (l < len) {
		c = s[l];
		k = 26 - k;
		k %= 26;
		if (64 < c && c < 91) {
			if (c + k > 90) {
				c += k - 26;
			} else {
				c += k;
			}
		} else if (96 < c && c < 123) {
			if (c + k > 122) {
				c += k - 26;
			} else {
				c += k;
			}
		}
		s[l++] = c;
	}

	puts("");
	puts(s);

	return 0;
}
