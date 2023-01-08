#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define SIZE 100

void printArray(int arrays[SIZE], int length)
{
	printf("\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d \t", arrays[i]);
	}
}

void remove(int a[SIZE], int& n, int pos)
{
	if (pos < 0 || pos >= n)
		return;

	for (int i = pos; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	a[n - 1] = 0;
	n--;
}

void removeNumber(int a[SIZE], int& n, int number)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == number)
		{
			remove(a, n, i);
		}
	}
}

int main()
{
	int a[100] = { 2, 2, 2, 1, 3, 7, 2, 2, 6, 8 };
	// int a[100] = { 1, 2, 3, 2, 3 };
	int length = 10;

	printArray(a, length);

	int number = 2;
	removeNumber(a, length, number);

	cout << "--";
	printArray(a, length);
}