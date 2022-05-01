/*****************************************************************//**
 * \file   Maquina.h
 * \brief  
 * 
 * \author lufer
 * \date   April 2022
 *********************************************************************/
#include <stdbool.h>

#ifndef A
#define A 1

typedef struct Maquina {
	int num;
}Maquina, *PtrMaquina;

typedef struct ListaMaquinas {
	Maquina maquina;
	struct ListaMaquinas* prox; //ou apenas  PtrMaquina prox;
}ListaMaquinas;

#pragma region Assinatura_de_fun��es

//Cria nova mquina
Maquina* CriaMaquinaNova(int num);

/// Cria registo para inserir na linha de montagem
ListaMaquinas* CriaMaquinaLinha(Maquina* nova);

//Apresenta todas as m�quinas
void MostraLinhaMontagem(ListaMaquinas* h);

//Insere m�quina no in�cio
ListaMaquinas* InsereNovaInicio(ListaMaquinas* head, Maquina* nova);

//Insere m�quina no final
ListaMaquinas* InsereNovaFim(ListaMaquinas* head, Maquina* nova);

//Insere m�quina de forma ordenada
ListaMaquinas* InserePorOrdem(ListaMaquinas* head, Maquina* nova);

/// Verifica se determinado n�mero de m�quina j� existe
bool ExisteMaquina(int numMaquina, ListaMaquinas* head);

//Destroi lista
ListaMaquinas* DeleteAll(ListaMaquinas* h);

//Gerir Preserva��o de Dados - Ficheiros
//Guarda Dados
bool PreservaInforma��o(char fileName[], ListaMaquinas* h);
//Carrega Dados
ListaMaquinas* CarregaDados(char fileName[], ListaMaquinas* h);



#pragma endregion

#endif
