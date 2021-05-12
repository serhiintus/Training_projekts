//CallBack funkcion
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Header.h"

using namespace std;

int main()
{
	char* words[100];
	char txt[] = "Many applications you'll build in C# will require you to work with data. Sometimes that data will be hard-coded in your application.";
	cout << txt << endl << endl;
	int count = Tokenizer(txt, words, sizeof(words) / sizeof(words[0]), ' ');
	for (int i = 0; i < count; i++)
		cout << words[i] << endl;
	Sort(words, count, CompareLengs);
	cout << endl;
	for (int i = 0; i < count; i++)
		cout << words[i] << endl;
	Sort(words, count, CompareOrder);
	cout << endl;
	for (int i = 0; i < count; i++)
		cout << words[i] << endl;

	return 0;
}
