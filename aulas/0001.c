/*
 ======================================================================================================================
 Escreva um programa em C que leia uma matriz 3x3 de inteiros. Verifique se essa matriz é um quadrado mágico. Exemplo:
 {{ 8,  0,  7 },
  { 4,  5,  6 },
  { 3, 10,  2 }}
 Soma de cada linha/cada coluna/cada diagonal tem o mesmo valor.
 ======================================================================================================================
 */

#include <stdio.h>

int main() {
	int m, i, j, t, k = 0;
	_Bool b = 1;
    
	printf("Digite o tamanho da matriz M: ");
	scanf("%d", &m);
	t = 2 * m + 2;
	int a[m][m], s[t];
    
    // soma das linhas
	for (i = 0; i < m; i++) {
        s[k] = 0;
		for (j = 0; j < m; j++) {
            printf("Digite o valor da posição M[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            
            s[k] += a[i][j];
		}
		k++;
	}
    
    // soma das colunas
    for (i = 0; i < m; i++) {
        s[k] = 0;
        for (j = 0; j < m; j++) {
            s[k] += a[j][i];
        }
        k++;
    }
    
    // soma da diagonal principal
    for (i = 0; i < m; i++) {
        s[k] = 0;
        for (j = 0; j < m; j++) {
            if (i == j) {
                s[k] += a[i][j];
            }
        }
    }
    k++;
    
    // soma da diagonal secundária
    for (i = 0; i < m; i++) {
        s[k] = 0;
        for (j = 0; j < m; j++) {
            if (i + j == m - 1) {
                s[k] += a[i][j];
            }
        }
    }
    k++;
    
	puts("\nA matriz M: \n");
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			printf("%3d ", a[i][j]);
		}
		puts("\n");
	}
	
    while (k-- > 1) {
        printf("%d", s[k]);
        if (s[k] != s[k - 1]) {
            b = 0;
        }
    }
    
    b ? puts("É um quadrado mágico.") : puts("Não é um quadrado mágico.");

	return 0;
}
