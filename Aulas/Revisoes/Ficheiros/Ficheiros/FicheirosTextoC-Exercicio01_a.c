/*
	Name:  FicheiroTextoC-Exerc�cio01_a.c
	Author:
	Date: 25/10/17 14:00
	Description: percorrer o ficheiro caracter a caracter e apresentar no ecran o conte�do do ficheiro
	             com o prefixo do n�mero de cada linha
*/
#include <stdio.h>

#pragma warning (disable: 4996)

// fun��o principal
int main1() {
	// declara��o e inicializa��o de vari�veis

    FILE *af; // apontador para descritor de ficheiro
    char c ;
    int nLinhas = 1;


    // abrir  ficheiro em modo leitura (r)
    af = fopen("a.txt", "r") ;
    // testar se ocorreu erro na abertura do ficheiro
    if (af == NULL)
        printf("Erro na abertura do ficheiro a.txt!\n");
    else {
        printf("Sucesso na abertura do ficheiro a.txt! \n");
        // leitura do ficheiro caracter a caracter
        c = fgetc(af); // le o primeiro
        printf("%d: ", nLinhas);
        nLinhas = nLinhas +1;
        while (c != EOF) {
            printf("%c", c); // escreve na consola
            if (c == '\n') {
                printf("%d: ", nLinhas);
                nLinhas = nLinhas +1;
            }
            c = fgetc(af); // avanca com a leitura
        }
        fclose(af); // fechar o descritor de ficheiro
    }
	getche();
	return 0;
}


