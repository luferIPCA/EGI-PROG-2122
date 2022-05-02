/**
* Author: lufer
* Email: lufer@ipca.pt
* Date: 28-02-2022
* Desc: Assinatura de funções
* ????
*/

//#pragma once

#ifndef FEITO


#pragma region Funções

int Soma(int x, int y);	
int FindMaxArray(int valores[], int n);

#pragma endregion

#pragma region Structs

#define N 20

typedef struct Carro {
	int ano;
	char marca[N];
} Carro;
#pragma endregion


#define FEITO 1
#endif 