#include<string.h>
#include"Header.h"

//This function sorts the elements of the array from smallest to largest.
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

//This function breaks a given line of text into parts and returns the number of parts.
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

//This function swaps two variables.
void Swap(char** x, char** y)
{
	char* z = *x;
	*x = *y;
	*y = z;
}

//This function sorts the elements of the array according to the pointer to the function (Bigger).
void Sort(char** w, UINT n, CMPFUNC Bigger)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (Bigger(w[i], w[j]))
				Swap(&w[i], &w[j]);
}

//This function compares two strings in length.
bool CompareLengs(char* str1, char* str2)
{
	return strlen(str1) > strlen(str2);
}

//This function up characters.
char Uper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - ('a' - 'A');
	else
		return c;
}

//This function compares two strings in alphabetic.
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
