#include<iostream>
#include<string.h>


using namespace std;
template<class T>
void Swap(T* x, T* y)
{
	T z = *x;
	*x = *y;
	*y = z;
}

template<class T>
void Rev(T arr[], int size)
{
	if (arr == 0 || size <= 1)
		return;
	int i = 0; int j = size - 1;
	while (i < j)
	{
		Swap(&arr[i], &arr[j]);
		i++; j--;
	}
}

int main()
{
	int iarr[] = { 11,12,13,14,15,16,17,18,19,21 };
	int s = sizeof(iarr) / sizeof(iarr[0]);
	Rev(iarr, s);
	for (int i = 0; i < s; i++)
		cout << iarr[i] << " ";
	float farr[] = { 11.1,22.2,33.3,44.4,55.5,66.6,77.7,88.8, 99.9 };
	s = sizeof(farr) / sizeof(farr[0]);
	Rev(farr, s);
	cout << endl << endl;
	for (int i = 0; i < s; i++)
		cout << farr[i] << " ";
	const char* cArr[] = { "one", "two", "three", "four", "five" };
	s = sizeof(cArr) / sizeof(cArr[0]);
	Rev(cArr, s);
	cout << endl << endl;
	for (int i = 0; i < s; i++)
		cout << cArr[i] << " ";

	return 0;
}