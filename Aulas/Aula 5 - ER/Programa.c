/*****************************************************************//**
 * @file   Programa.c
 * @brief  Expressões Regulares em C
 * 
 * @author lufer
 * @date   May 2022
 * 
 * @see		https://docs.microsoft.com/en-us/cpp/standard-library/regular-expressions-cpp?view=msvc-170
 * 
 * int scanf(const char *format, ...);
 * scanf == fscanf(stdin, const char *format, ...);
 * 
 * int fscanf(FILE *stream, const char *format, ...);
 * int sscanf(const char *str, const char *format, ...);
 * int strtok()
 * int fprintf(...)
 * printf == fprintf (stdout,...)
 * 
 * @Exemplo
 *			Email ER: ^([a-zA-Z0-9_\-\.]+)@([a-zA-Z0-9_\-\.]+)\.([a-zA-Z]{2,5})$ 
 *********************************************************************/

/*
* ASCII
* 
[a-z] - todas as letras minusculas
[A-Z]
[0-9]{2,8}
[^0-9]	 - excepto digitos
[^?-,]	 - excepto ? - e ,
[a-zA-Z] - 
^[a-z]
$[a-z]

(([0-9]{2}[/-,])([0-9]{2}[/-,])([0-9]{4}))) 

%d			"\d+"	"[0-9]+"
%s			"\w"	"[a-zA-Z]+"
%[^,]s

*/

#include <stdio.h>
#include <stdbool.h>
#include "Ficheiros.h"
#pragma warning (disable:4996)

int main(int argc, char** argv) {

	/*
	int d;
	scanf("%d",&d);

	char aux[10];
	getchar();
	gets(aux);		//gets+sscanf == fscanf
	*/

	/*
	Exemplos de Expressões Regulares*/
	char s[] = "notepad=1.0.0.1001";
	char filename[32] = "";
	int i = sscanf(s, "%[a-z]*s", filename);
	printf("Lido: %s\n", s);
	i = sscanf(s, "%*[^=]=%s", filename);
	printf("Lido: %s\n", s);

	char texto[10][TAM];
	bool b;
	
	printf("ARGS: %d\n", argc);
	if (argc > 1) {
		int i = 1;
		while(i<argc)
			printf("PARM: %s\n", argv[i++]);
	}

	//b = LoadFile("Dados.txt",texto);			//com fscanf

	b = LoadFileII("Dados.txt", texto);		//com gets

	b = CopyFile("Dados.txt", "DadosII.txt");

	b = ChangeWordFile("Dados.txt", "IPCA", "Institututo Politécnico do Cávado e do Ave");

	//bool b = ChangeWordFile("Dados.txt", argv[1], argv[2]);

}

bool Transforma(char* fileNameIn, char* pal, char* novaPal, char* filenameOut) {


}


