/**
*  @file Pessoa.h
 * @author lufer
 * @date 2022
 * @brief Lista Ligadas Simples (versão 1)
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

#pragma region InformaçãoMemória
/**
* @brief Informação de uma pessoa
*/
typedef struct Pessoa {
	int nc;			/**< Número de Contribuinte*/
	char nome[M];	/**< Nome da Pessoa */
}Pessoa;

/**
* @brief Lista de Pessoas
* Informação sobre a Pessoa, os seus contactos e apontador para outra Pessoa
*/
typedef struct ListaPessoa {
	struct Pessoa fichaPessoa;	/**< toda a informação da Pessoa */
	struct ListaContactos* listaContactos;	/**< Todos os contactos da Pessoa*/
	struct ListaPessoa* proxPessoa;	/**< Ligação a outra pessoa*/
}ListaPessoa;

typedef enum CONTROLERROR {
	NO_ERROR = 1,
	NO_FILE =45,
	PRESIDENT=100,
	NO_DATA=2
}CONTROLERROR;

#pragma region GerePessoa

Pessoa* CriaLista();
Pessoa* CriaPessoa(char* nome, int nc);
ListaPessoa* CriaNodoListaPessoas(Pessoa* c);
ListaPessoa* InserePessoaListaPessoas(ListaPessoa* h, Pessoa* p);
ListaPessoa* ProcuraPessoa(ListaPessoa* inicio, int nc);
void MostraTodasPessoas(ListaPessoa* h);
ListaPessoa* GetAllPessoas(char* fileName);

CONTROLERROR SavePessoas(ListaPessoa* h, char* fileName);

#pragma endregion

#pragma region GereListaContactos

void MostraContactosPessoa(ListaPessoa* inicio, int nc);
ListaPessoa* InsereContactoPessoa(ListaPessoa* h, Cont 
	acto* c, int nc);

#pragma endregion

#pragma endregion

#pragma region InformaçãoFicheiro

/**
* Preservar dados em ficheiro
*/
typedef struct TodaInformacaoPessoa {
	int nc;				/**<Numero de Contribuinte da pessoa*/
	Contacto contacto;	/**<Contacto da pessoa*/
 }TodaInformacaoPessoa;

bool SaveAll(ListaPessoa* h, char* fileName);

ListaPessoa* GetAllContacts(char* fileName, ListaPessoa* h);
ListaPessoa* GetData(char* fileName);

#pragma endregion