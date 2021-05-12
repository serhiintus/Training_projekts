#include<string.h>
#include"Header.h"

void SortArr(int farr[], int size)
{
	int buff;
	for (int i = 0; i < size; i++)
		for (int j = i + 1; j < size; j++)
			if (farr[i] > farr[j])
			{
				buff = farr[i];
				farr[i] = farr[j];
				farr[j] = buff;
			}
}
int Tokenizer(char input[], char* output[], unsigned int num, char separator)
{
	int count = 0;
	if (input == NULL || !output)
		return count;
	while (*input)
	{
		if (count == num)
			break;
		while (*input == separator)
			input++;
		if (!(*input))
			return count;
		*output++ = input;
		count++;
		while (*input && *input != separator)
			input++;
		if (!*input)
			break;
		*input++ = 0;
	}
	return count;
}
void Swap(char** x, char** y)
{
	char* z = *x;
	*x = *y;
	*y = z;
}
void Sort(char** w, UINT n, CMPFUNC Bigger)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (Bigger(w[i], w[j]))
				Swap(&w[i], &w[j]);
}
bool CompareLengs(char* str1, char* str2)
{
	return strlen(str1) > strlen(str2);
}
char Uper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - ('a' - 'A');
	else
		return c;
}
bool CompareOrder(char* str1, char* str2)
{
	char ch1 = Uper(*str1);
	char ch2 = Uper(*str2);
	while (ch1 && ch2)
	{
		if (ch1 != ch2)
			break;
		ch1 =  Uper(* ++str1) ;
		ch2 =  Uper(* ++str2) ;
	}
	return ch1 > ch2;
}
