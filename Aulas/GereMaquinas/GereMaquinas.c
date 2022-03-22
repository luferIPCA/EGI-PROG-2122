/**
*  @file GereMaquinas.c
 * @author lufer
 * @email lufer@ipca.pt
 * @date 2022
 * @brief Lista Ligadas Simples
 *
 *	Manipula��o de Lista Ligada Simples de M�quinas

 * @see http://www.stack.nl/~dimitri/doxygen/docblocks.html
 * @see http://www.stack.nl/~dimitri/doxygen/commands.html
 * @see http://fnch.users.sourceforge.net/doxygen_c.html
 *
 * @bug bugs desconhecidos.
*/

#include "Dados.h"
#include "Maquinas.h"



int main() {

	Maquina* inicoLista;	
	inicoLista= NULL;

	Maquina* x = CriaMaquina(12, "Corte");
	inicoLista = InsereMaquina(inicoLista, x);

	x = CriaMaquina(13, "Pintar");
	inicoLista = InsereMaquina(inicoLista, x);

}