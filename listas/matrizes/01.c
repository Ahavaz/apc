#include <stdio.h>

int main(void) {
	int m = 11, n = m, a[m][n], k = 0;

	while (k < m) {
		for (int i = k; i + k < m; i++) {
			for (int j = k; j + k < n; j++) {
				a[i][j] = k + 1;
			}
		}
		k++;
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d ", a[i][j]);
		}
		puts("\n");
	}

	return 0;
}
