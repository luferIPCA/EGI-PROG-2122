/*****************************************************************//**
 * @file   ManipulaFicheiros.c
 * @brief  Operações sobre ficheiros
 *	fscanf	- leitura formatada no ficheiro
 *	sscanf	- leitura formatada em memória
 *	strok	- parsing de uma string
 * @author lufer
 * @date   May 2022
 *********************************************************************/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "Ficheiros.h"

#pragma warning (disable:4996)


/**
 * @brief Ler ficheiro de texto com fscanf
 * 
 * @param fileName	Ficheiro a ler
 * @return			Texto lido
 */
bool LoadFile(char* fileName, char texto[][TAM]) {
	FILE* fp=NULL;
	char t[100];
	int s;
	int i;			//controlar linhas do array de saída
	fp = fopen(fileName, "r");
	if (fp == NULL) {
		perror("Erro ao abrir o ficheiro\n");
		return(false);
	}
	i = 0;
	while (fscanf(fp, "%[^\n] ",t) != EOF) {
		t[strlen(t)] = '\0'; //or strlen(t)-1
		strcpy(texto[i], t);
		i++;
	}

	fclose(fp);
	return true;
}

/**
 * @brief Ler ficheiro de texto com gets.
 * 
 * @param fileName
 * @param texto
 * @return 
 */
bool LoadFileII(char* fileName, char texto[][TAM]) {
	FILE* fp = NULL;
	char t[100];
	int s;
	int i;			//controlar linhas do array de saída
	fp = fopen(fileName, "r");
	if (fp == NULL) {
		perror("Erro ao abrir o ficheiro\n");
		return(false);
	}
	i = 0;
	while (fgets(t,100,fp)!=NULL) {
		//if(t[strlen(t)-1] == '\n') 
		//	t[strlen(t)-1] = '\0'; //or strlen(t)-1
		strcpy(texto[i], t);
		i++;
	}
	fclose(fp);
	return true;
}

/**
 * @brief .
 * 
 * @param fileSource
 * @param fileDest
 * @return 
 */
bool CopyFile(char* fileSource, char* fileDest){
	FILE* fp1, * fp2;
	char text[TAM];
	int x;
	fp1 = fopen(fileSource, "r");
	if (fp1 == NULL) return false;

	fp2 = fopen(fileDest, "w");
	if (fp2 == NULL) return false;

	while (fgets(text,TAM,fp1) != NULL) {
		//if (text[strlen(text) - 1] == '\n') text[strlen(text) - 1] = '\0';
		fputs(text, fp2);
		//fprintf(fp2, "%s", text);
	}
	fclose(fp1);
	fclose(fp2);
	return true;
}

/**
 * @brief Mostra o conteúdo de um ficheiro com a alteração realizada.
 * 
 * @param fileName	[in]	Nome do Ficheiro
 * @param word		[in]	Palavra a procurar
 * @param newWord	[in]	Nova palavra
 * @return			[out]	True ou False
 */
bool ChangeWordFile(char* fileName, char* word, char *newWord) {
	FILE* fp = NULL;
	char text[TAM];
	char* field;

	int s;
	bool lastToken = false;
	fp = fopen(fileName, "r");
	if (fp == NULL) {
		perror("Erro ao abrir o ficheiro\n");
		return(false);
	}
	while (fgets(text, TAM, fp) != 0) {
		lastToken = false;
		//if (text[strlen(text) - 1] == '\n') text[strlen(text) - 1] = '\0';
		field = strtok(text, word);
		while (field != NULL) {
			if (lastToken==false) printf("%s", field);
			field = strtok(NULL, word);	//proximo token
			if (field == NULL) lastToken = true;
			if (lastToken == false)
			{
				printf("%s", newWord);
			}	
		}
	}
}
