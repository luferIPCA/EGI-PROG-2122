/**
*  @file Pessoa.h
 * @author lufer
 * @date 2022
 * @brief Lista Ligadas Simples (vers�o 1)
 *
 * Dados globais para uma Lista Ligada Simples de Pessoas
 * @bug No known bugs.
*/
#pragma once
#pragma warning( disable : 4996 ) //evita MSG ERROS: _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Contatos.h"
#include <stdbool.h>

#define M 20

#pragma region Informa��oMem�ria
/**
* @brief Informa��o de uma pessoa
*/
typedef struct Pessoa {
	int nc;			/**< N�mero de Contribuinte*/
	char nome[M];	/**< Nome da Pessoa */
}Pessoa;

/**
* @brief Lista de Pessoas
* Informa��o sobre a Pessoa, os seus contactos e apontador para outra Pessoa
*/
typedef struct ListaPessoa {
	struct Pessoa fichaPessoa;	/**< toda a informa��o da Pessoa */
	struct ListaContactos* listaContactos;	/**< Todos os contactos da Pessoa*/
	struct ListaPessoa* proxPessoa;	/**< Liga��o a outra pessoa*/
}ListaPessoa;

#pragma region GerePessoa

Pessoa* CriaLista();
Pessoa* CriaPessoa(char* nome, int nc);
ListaPessoa* CriaNodoListaPessoas(Pessoa* c);
ListaPessoa* InserePessoaListaPessoas(ListaPessoa* h, Pessoa* p);
ListaPessoa* ProcuraPessoa(ListaPessoa* inicio, int nc);
void MostraTodasPessoas(ListaPessoa* h);
ListaPessoa* GetAllPessoas(char* fileName);
bool SavePessoas(ListaPessoa* h, char* fileName);

#pragma endregion

#pragma region GereListaContactos

void MostraContactosPessoa(ListaPessoa* inicio, int nc);
ListaPessoa* InsereContactoPessoa(ListaPessoa* h, Contacto* c, int nc);

#pragma endregion

#pragma endregion

#pragma region Informa��oFicheiro

/**
* Preservar dados em ficheiro
*/
typedef struct TodaInformacaoPessoa {
	int nc;		/**<Numero de Contribuinte da pessoa*/
	Contacto contacto;	/**<Contacto da pessoa*/
 }TodaInformacaoPessoa;

bool SaveAll(ListaPessoa* h, char* fileName);

ListaPessoa* GetAll(char* fileName, ListaPessoa* h);
ListaPessoa* GetData(char* fileName);

#pragma endregion