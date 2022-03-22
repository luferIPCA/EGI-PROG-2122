/**
*  @file Maquinas.c
 * @author lufer
 * @email lufer@ipca.pt
 * @date 2022
 * @brief Lista Ligadas Simples 
 *
 *	Fun��es para Manipula��o de Lista Ligada Simples de M�quinas

 * @see http://www.stack.nl/~dimitri/doxygen/docblocks.html
 * @see http://www.stack.nl/~dimitri/doxygen/commands.html
 * @see http://fnch.users.sourceforge.net/doxygen_c.html
 *
 * @bug bugs desconhecidos.
*/

#include "Maquinas.h"

/**
*	Cria nova maquina...
*/
Maquina *CriaMaquina(int novoCod, char*novoNome) {
	//aloca espa�o de mem�ria
	Maquina *nova = (Maquina*) malloc(sizeof(Maquina));
	nova->cod = novoCod;
	strcpy(nova->nome, novoNome);
	nova->prox = NULL;
	return nova;
}

/**
*	@brief Insere maquina na lista
*	@param [in] h		inicio da lista
*	@param [in] nova	nova maquina a inserir
*	@return		Inicio da Lista
*/
Maquina* InsereMaquina(Maquina* h, Maquina* nova) {
	
	if (nova == NULL)	//se nova vem a nulo
		return h;	
	if (h == NULL) {	//lista vazia
		h = nova;
		return (h);
	}
	/*else{		//insere sempre no inicio
		nova->prox = h;
		h = nova;
	}*/

	//else {	//insere sempre no fim
	//	Maquina* aux = h;
	//	while (aux->prox != NULL) aux = aux->prox;
	//	aux->prox = nova;
	//}
	else {		//insere ordenado (inicio, meio, fim)
		Maquina* aux = h;
		Maquina* antAux = aux;
		while (aux != NULL && aux->cod < nova->cod) {
			antAux = aux;
			aux = aux->prox;
		}
		if (aux == h) {		//insere antes do inicio
			nova->prox = h;
			h = nova;
			return h;
		}
		if (aux != NULL)	//insere no meio ou fim
		{
			nova->prox = aux;
			antAux->prox = nova;
		}
	}
	return h;
}