/* Faça um programa que lê as notas de n alunos, cada nota é um inteiro entre 0 e 100, e
imprima a quantidade de vezes com que apareceu cada nota. */

#include <stdio.h>

int main () {
	int n;

	printf("Insira o número de alunos: ");
	scanf("%d", &n);
	int a[n];

	for(int i = 0; i < n; i++) {
		printf("Insira a nota do aluno %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int aux;
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}

	int count = 1;
	for(int i = 0; i < n; i++) {
		if(a[i] != a[i+1]) {
			printf("%d aluno(s) com nota: %3d\n", count, a[i]);
			count = 1;
		} else {
			count++;
		}
	}

	return 0;
}

/*
// %d (int), %f (float), %c (char), %s (string)
int n;
scanf("format", &variable); // & (ampersand) is not prefixed to arrays (thus also strings)
printf("O valor de 'variable' é: 'format'", variable);

int a;
a = getchar(); // retorna um inteiro
putchar(a); // retorna um char

puts("Essa string não precisa de '\n' ao final para pular de linha.");

char password[] = "lasagna";
printf("A senha é \"%s\"\n", password);

char name[15]; // room for 14 characters and the null which ends the array
scanf("%s", name); // only prints the first word of the array
printf("You are %s.\n", name)

char input[64];
fgets(input, 64, stdin);
puts(input);

#include <math.h>
double a = 2.0;
float s = sqrt(a);
printf("The square root of %f is %.2f.\n", a, s);
float p;
p = pow(s,2);

#include <stdlib.h>
int r;
srand((unsigned)time(NULL)); // without passing this parameter to srand(), it's pseudorandom
r = rand();
printf("%2d is a random number.\n", r % 100);
*/

/*
#include <stdio.h>

int main(void) {
  int continuar=1;
  char opcao;

  while(continuar) {
	  system("clear || cls"); // limpa o terminal no linux e windows
	  printf("Repetir? S/N\n");
	  scanf(" %c",&opcao);

	  switch(opcao) {
      case 's':
      case 'S':
      	break;

      case 'n':
      case 'N':
      	continuar = 0;
  	}
  }
}
*/
