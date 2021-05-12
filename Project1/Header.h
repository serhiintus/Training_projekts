#pragma once

typedef unsigned int UINT;
typedef bool (*CMPFUNC)(char*, char*);

int Tokenizer(char input[], char* output[], unsigned int num, char separator);
void SortArr(int farr[], int size);
void Swap(char** x, char** y);
void Sort(char** w, UINT n, CMPFUNC Bigger);
bool CompareLengs(char* str1, char* str2);
bool CompareOrder(char* str1, char* str2);
char Uper(char c);
