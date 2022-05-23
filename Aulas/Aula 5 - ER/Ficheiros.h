#pragma once

#define TAM 4095
bool LoadFile(char* fileName, char texto[][TAM]);
bool LoadFileII(char* fileName, char texto[][TAM]);
bool LoadFileIII(char* fileName, char** texto);
bool ChangeWordFile(char* fileName, char* word, char* newWord);
bool CopyFile(char* fileSource, char* fileDest);

