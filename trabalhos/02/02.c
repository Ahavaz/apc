#include <stdio.h>

int main() {
	int i = 2, p = 1, n;

	scanf("%d", &n);

	while (i < n) {
		if (n % i == 0) {
			p = 0;
		}
		i++;
	}

	p == 0 ? printf("%d é bacana!", n) : printf("%d não é bacana!", n);

	return 0;
}
