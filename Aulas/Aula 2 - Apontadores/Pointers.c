/*
* author: lufer
* email: lufer@ipca.pt
* date: 06.03.2022
* desc: Apontadores
*/

#include "Dados.h"
/**
* Tentar alterar valor de um par�metro "const"...n�o � permitido!
*/
int* ChangeValue(const int* p) {
	//*p = *p + 1;		//n�o � permitido pois � const
	return p;
}

/**
* Verifica qual o maior entre dois elementos
* N�o funciona quando forem iguais
*/
int* Maior(int* p, int* q) {
	if (*p > *q) return p;
	return q;
}

/**
* Verifica qual o maior entre dois elementos
* Indica se s�o ou nn�o diferentes!
*/
bool MaiorII(int x, int y, int* maior) {

	if (x > y) {
		*maior = x;
		return true;
	}
	else
	{
		if (x == y) {
			*maior = x;
			return false;
		}
		else {
			*maior = y;
			return true;
		}
	}
}


/**
* Verifica se determinado valor existe num array
* Devolve a posi��o onde se encontra
* @param [in] n
* @param [out] p	//posi��o do array
*/
bool ExisteValorPosicao(int v[], int n, int valor, int* pos) {

	for (int i = 0; i < n; i++) {
		if (v[i] == valor) {
			*pos = i;		//posi��o onde existe
			return (true);	//existe
		}
	}
	*pos = -1;				//posi��o errada!
	return (false);			//N�o existe
}

/**
* Analisar!!!! Qual o problema?
*/
int Get(int* ptr) {
	int a = 10;
	ptr = &a;
	return 0;
}
/*A vari�vel "a" desaparece ap�s a execu��o da fun��o*/

/**
* Tenta trocar...n�o consegue!
*/
void Troca(int x, int y) {
	int t = x;
	x = y;
	y = t;
}

/**
* Consegue trocar
*/
void TrocaII(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}
