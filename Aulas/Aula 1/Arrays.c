/**
* Author: lufer
* Email: lufer@ipca.pt
* Date: 28-02-2022
* Desc: Módulo para gerir Arrays
* ????
*/

#include "Funcoes.h"

#pragma region Arrays

/**
* Procura o maior valor de uma array...
*/
int FindMaxArray(int valores[], int n) {

	int aux = valores[0];
	for (int i = 1; i < n; i++) {
		if (aux < valores[i]) aux = valores[i];
	}
	return aux;
}

#pragma endregion


