/*
 ============================================================================================================================
 O imperador romano Júlio César usava um método de criptografia para mandar mensagens criptografadas para seus generais.
 Este método considerava a ordem dos caracteres no alfabeto e trocava cada letra pela k-ésima letra seguinte a letra. Por
 exemplo, se k = 3, então a ocorrência da letra 'A' era trocada pela letra 'D'. A letra 'B' era trocada pela letra 'E', assim
 por diante. Esta substituição era feita de maneira cíclica, que neste caso a letra 'Z' era trocada pela letra 'C'. Faça um
 programa que lê um inteiro k e uma cadeia de caracteres e imprime a correspondente mensagem criptografada pela cifra de
 César com parâmetro k.
 ============================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int t = 100, k, l = 0, len;
	char s[t], c;

	printf("Insira o valor de K: ");
	scanf("%d", &k);

	printf("Insira a string com até %d caracteres a ser criptografada.\n", t - 1);
	fflush (stdin);
	__fpurge(stdin);
	fgets(s, t, stdin);

	len = strlen(s);
	while (l < len) {
		c = s[l];
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
