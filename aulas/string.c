/*
 ================================================================================================
 Faça um programa que leia 2 strings (A e B) e retorne uma terceira string (C) formada
 pelos caracteres de A e B intercalados. Ex.: Se A='Quarta' e B='Segunda', a resposta
 deve ser 'QSueagrutnada'.
 ================================================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
	int t = 101, k = 0, len1, len2, len3, i;
	char s1[t], s2[t], s3[2 * t];

	printf("Digite a string A (máx %d caracteres): ", t - 1);
	fgets(s1, t, stdin);

	printf("Digite a string B (máx %d caracteres): ", t - 1);
	fflush (stdin);
	fgets(s2, t, stdin);

	len1 = strlen(s1) - 1;
	len2 = strlen(s2) - 1;
	len3 = len1 + len2;

	for (i = 0; i < len3; i++) {
		if (i < len1) {
			s3[k++] = s1[i];
		}
		if (i < len2) {
			s3[k++] = s2[i];
		}
	}
	s3[k] = '\0';

	printf("String C: %s", s3);

	return 0;
}
