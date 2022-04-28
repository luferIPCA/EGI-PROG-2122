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
#include <stdio.h>
#include "Contatos.h"

#define M 40
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
	struct Pessoa ficha;	/**< toda a informa��o da Pessoa */
	struct ListaContactos* contactos;	/**< Todos os contactos da Pessoa*/
	struct ListaPessoa* prox;	/**< Liga��o a outra pessoa*/
}ListaPessoa;

Pessoa* CriaPessoa(char* nome, int nc);
ListaPessoa* CriaNodoListaPessoas(Pessoa* c);
ListaPessoa* InserePessoaListaPessoas(ListaPessoa* h, Pessoa* p);

ListaPessoa* ProcuraPessoa(ListaPessoa* inicio, int nc);
void MostraTodasPessoas(ListaPessoa* h);


void MostraContactosPessoa(ListaPessoa* inicio, int nc);
ListaPessoa* InsereContactoPessoa(ListaPessoa* h, Contacto* c, int nc);