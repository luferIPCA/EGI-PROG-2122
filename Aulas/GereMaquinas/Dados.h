/**
*  @file Dados.h
 * @author lufer
 * @email lufer@ipca.pt
 * @date 2022
 * @brief Lista Ligadas Simples (vers�o 1)
 *
 *	Defini��es globais: constantes, Tipos e Assinaturas de fun��es

 * @see http://www.stack.nl/~dimitri/doxygen/docblocks.html
 * @see http://www.stack.nl/~dimitri/doxygen/commands.html
 * @see http://fnch.users.sourceforge.net/doxygen_c.html
 *
 * @bug bugs desconhecidos.
*/

#ifndef DEFJOBS

#include <stdio.h>


#define MAX 100

typedef struct Job {
	int cod;
	struct Job* prox;
}Job;


#define DEFJOBS 
#endif

