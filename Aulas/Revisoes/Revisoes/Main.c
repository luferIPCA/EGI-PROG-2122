/*
* lufer
* Revis�es 
*/
#include<stdio.h>
#include <stdbool.h>
#include "Funcoes.h"
#include <locale.h>

//enum Bool{True, False};

int main() {
	
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s

#pragma region DECLVARIAVEIS

	int x;
	x = 3;

	int y = 2 * x;

	//------

	char c;
	double d;
	float f;

	//------

	//Operadores: +,-,*,/ || && ++, --, *= += -= /= % == != < <= > >=

	x = 7;
	if (x=2) {		//Cuidado...n�o est� a comparar...mas sim a atribuir!
		printf("%d\n", x);
	}
	else
		printf("%d\n", x);

	// Array

	int n = 10;			//N�mero de pessoas
	Pessoa turma[MAX];
	turma[0].sexo = (Sexo)M;
	strcpy(turma[0].nome,"ola");
	turma[0].numero = 12;
	turma[0].numero++;

	int pos = ProcuraPosicao(turma, n, 13);
	printf("Encontrou? : %s - na posi��o: %d\n\n", (pos >= 0) ? "Sim" : "N�o", pos);
	

	Pessoa aux = RemovePessoa(turma, &n, 13);
	if (aux.numero == -1) {
		printf("N�o removeu..");
	}
	else
		printf(" %d removido!", aux.numero);


	// Lista
	//cria Pessoa de forma explicita
	Pessoa* p;
	p = (Pessoa*)malloc(sizeof(Pessoa));
	p->numero = 23;
	p->sexo = F;
	strcpy(p->nome, "Ola");
	p->next = NULL;

	//cria Pessoa de forma explicita
	Pessoa* q;
	q = (Pessoa*)malloc(sizeof(Pessoa));
	strcpy(q->nome, "Ole");
	q->numero = 13;
	q->sexo = M;
	q->next = NULL;
	//Liga uma pessoa (p) a outra (q)
	p->next = q;

	//Cria Pessoa usando um m�todo
	Pessoa* outra = CriaPessoa(14, "ole",M);

	//Liga uma pessoa (q) a outra (outra)
	q->next = outra;

	//Libertar mem�ria alocada
	free(p);
	free(q);
	free(outra);
#pragma endregion

}