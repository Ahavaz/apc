/*
======================================================================================================================
Escreva um programa em C que cria um vetor V de 20 números inteiros. Solicite ao usuário que informe esses números.
Imprima a média dos elementos desse vetor. Em seguida, informe quantos elementos estão abaixo dessa média.
======================================================================================================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int t = 20, v[20], i, soma = 0, k = 0;
	float media;

	printf("Insira os %d valores inteiros do vetor V.\n\n", t);

	for (i = 0; i < t; i++) {
		printf("V[%d]: ", i);
		scanf("%d", &v[i]);
		soma += v[i];
	}

	media = (float)soma / t;
	printf("\nA média é %.2f\n", media);

	for (i = 0; i < t; i++) {
		if (v[i] < media) {
			k++;
		}
	}
	printf("\nHá %d valor(es) abaixo da média.\n\n", k);

	return 0;
}
