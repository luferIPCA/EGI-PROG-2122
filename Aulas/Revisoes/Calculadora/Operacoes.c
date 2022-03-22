/*
* autor:lufer
* UC: Programa��o
* email:lufer@ipca.pt
* data: 03
* versao: 1
* Descricao: Opera��es b�sicas de uma calculadora
*/

/// <summary>
/// Calcula a soma de dois valores inteiros
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
int soma(int x, int y) {
	return x + y;
}


/*
* Fun��o que calcula a soma de dois valores inteiros
*/
int sub(int x, int y) {
	return (x - y);
}

/// <summary>
/// 
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
int mul(int x, int y) {
	return (x * y);
}

/// <summary>
/// 
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
float div(int x, int y) {
	if (y != 0)
	{
		return ((float)x / y);
	}
	return (x);
}

/// <summary>
/// 
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns></returns>
int maior(int x, int y) {
	int aux;

	//if (x > y)
	//	aux= x;
	//else
	//	aux = y;

	//return aux;

	//(condi��o) ? acc1_Verdade : acc2_Falso	// if (x>y) acc1 else acc2

	aux = (x > y) ? x : y;
	return aux;

	//return (x < y ? y : x);	// ?:
}


