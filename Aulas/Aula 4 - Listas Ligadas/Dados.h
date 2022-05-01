/**
 * @file Dados.h
 * @author lufer
 * @date 2022
 * @brief Defini��es Globais para Lista Ligadas Simples (vers�o 1)
 *
 *	Structs, Constantes e Assinaturas de Fun��es  Listas Ligadas Simples
*/

#ifndef DADOS
#define DADOS

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#pragma warning( disable : 4996 ) //evita MSG ERROS: _CRT_SECURE_NO_WARNINGS

#define N 20

#pragma region VERSAO1

/**
 * @brief Estrutura para armazenar um jogo
 *
 * Um jogo cont�m um c�digo (@@cod), nome (@@nome) e um tipo (@@tipo).
 * Cont�m apontador para pr�ximo jogo
 */
typedef struct Jogo {
	int cod;
	char nome[N];
	char tipo;
	struct Jogo* next;		/**< apontador para pr�ximo jogo*/
}Jogo, *JogoPtr;

/**
 * @brief Estrutura para armazenar um jogo em ficheiro
 *
 * Um jogo cont�m um c�digo (@@cod), nome (@@nome) e um tipo (@@tipo).
 * N�p cont�m apontador
 */
typedef struct JogoFile {
	int cod;
	char nome[N];
	char tipo;
}JogoFile;


extern Jogo* headLista;

bool ExisteJogo(Jogo* h, int cod);
bool ExisteJogoRecursivo(Jogo* h, int cod);
Jogo* criaJogo(int cod, char* nome, int tipo);
Jogo* InsereJogoInicio(Jogo* h, Jogo* novo);
void InsereJogoInicioII(Jogo** h, Jogo* novo);
void InsereJogoInicioIII(Jogo* h, Jogo* novo);
Jogo* InsereJogoOrdenado(Jogo* h, Jogo* novo);
Jogo* InsereJogoFim(Jogo* h, Jogo* novo);
bool gravarJogoBinario(char* nomeFicheiro, Jogo* h);
Jogo* lerJogosBinario(char* nomeFicheiro);
/**
* @brief Alterar ficha de um jogo
* 
* @param [in] cod	C�digo do jogo a alterar
* @param [in] novoTipo	Novo tipo do Jogo
* @param [in] h Apontador para in�cio da Lista
* @return Apontador para in�cio da Lista da Lista
*/
Jogo* AlteraJogo(Jogo* h, int cod, char novoTipo);
void AlteraJogoPtr(Jogo** h, int cod, char tipo);
//Emilinar Jogo
Jogo* RemoveJogo(Jogo* h, int cod);
//Devolve endere�o do jogo
Jogo* ProcuraJogo(Jogo* h, int cod);
//Ordenar uma Lista
Jogo* OrdenaLista(Jogo* h);
//Elimina uma lista
void DestroiLista(Jogo** h);
//apresenta Lista
void MostraLista(Jogo* h);
//apresenta ficha de jogo
void MostraJogo(Jogo* nodo);

//Fun��o de Ordem 2
void PercorreLista(Jogo* h, void(*f)(Jogo* h));

#pragma endregion


#endif