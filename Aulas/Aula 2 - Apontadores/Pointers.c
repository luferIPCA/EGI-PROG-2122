/*
* author: lufer
* email: lufer@ipca.pt
* date: 06.03.2022
* desc: Apontadores
*/

#include "Dados.h"
/**
* Tentar alterar valor de um parâmetro "const"...não é permitido!
*/
int* ChangeValue(const int* p) {
	//*p = *p + 1;		//não é permitido pois é const
	return p;
}

/**
* Verifica qual o maior entre dois elementos
* Não funciona quando forem iguais
*/
int* Maior(int* p, int* q) {
	if (*p > *q) return p;
	return q;
}

/**
* Verifica qual o maior entre dois elementos
* Indica se são ou nnão diferentes!
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
* Devolve a posição onde se encontra
* @param [in] n
* @param [out] p	//posição do array
*/
bool ExisteValorPosicao(int v[], int n, int valor, int* pos) {

	for (int i = 0; i < n; i++) {
		if (v[i] == valor) {
			*pos = i;		//posição onde existe
			return (true);	//existe
		}
	}
	*pos = -1;				//posição errada!
	return (false);			//Não existe
}

/**
* Analisar!!!! Qual o problema?
*/
int Get(int* ptr) {
	int a = 10;
	ptr = &a;
	return 0;
}
/*A variável "a" desaparece após a execução da função*/

/**
* Tenta trocar...não consegue!
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
