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
	setvbuf(stdout, NULL, _IONBF, 0);
	int t = 100, k, l = 0, len;
	char s[t], c;

	printf("Insira o valor de K: ");
	scanf("%d", &k);

	printf("Insira uma string com até %d caracteres.\n", t);
	fflush (stdin);
	gets(s);

	len = strlen(s);
	while (l < len) {
		c = s[l];
		if (64 < c && c < 91) {
			c += k + 32;
			if (c > 90) {
				c -= 26;
			}
		}
		if (96 < c && c < 123) {
			c += k;
			if (c > 122) {
				c -= 26;
			}
		}
		s[l++] = c;
	}

	int i = -1;
	while (++i < len) {
		printf("%c", s[i]);
	}

	puts("");
	puts(s);

	return 0;
}
