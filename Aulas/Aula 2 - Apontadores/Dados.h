/*
* author: lufer
* email: lufer@ipca.pt
* date: 06.03.2022
* desc: Definição de Assinaturas, #defines, typedef
*/

//#pragma once
#ifndef X
#define X 1

#include <stdbool.h>

int* ChangeValue(const int* p);
int* Maior(int* p, int* q);
bool MaiorII(int x, int y, int* maior);
int Get(int* ptr);
bool ExisteValorPosicao(int v[], int n, int valor, int* pos);
void TrocaII(int* x, int* y);
void Troca(int x, int y);

#define N 20
typedef struct Pessoa {
	int idade;
	char nome[N];
	struct Pessoa* primo;
}Pessoa;
#endif  // !X