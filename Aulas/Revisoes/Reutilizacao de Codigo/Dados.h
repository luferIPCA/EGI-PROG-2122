/*
* Estruturas de Dados 
*/

#pragma once

#include <stdbool.h>

#pragma warning (disable: 4996)

#define N 50
/// <summary>
/// Estrutura para guardar informa��o em ficheiro. N�o deve guardar apontadores!
/// </summary>
typedef struct ValorFicheiro {
	int v;
	char nome[N];
}ValorFicheiro;

/// <summary>
/// Estrutura para guardar informa��o em Lista na mem�ria. Tem apontadores
/// </summary>
typedef struct Valor {
	struct Valor* proximo;
	int v;
	char nome[N];
}Valor, * PtrValor;
