#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int l = 101, len;
	char s[l], c = 0;

	printf("Insira uma string com até %d caracteres.\n\n", l - 1);
	gets(s);

	len = strlen(s);
	for (int i = 0; i < len; i++) {
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
	puts(s);

	return 0;
}
