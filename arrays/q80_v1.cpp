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
			i--;
		}
	}
}

int main()
{
	int a[100] = { 1, 2, 22, 44, 3, 4, 5, 6, 7, 8, 9 };
	// int a[100] = { 1, 2, 3, 2, 3 };
	// 1. 2 1 3 7 6 8 
	// 2. 1 3 6 8

	int length = 11;

	/*printArray(a, length);

	int number = 2;
	removeNumber(a, length, number);*/

	printArray(a, length);

	int i = 0, j = length - 1;
	while (i < j)
	{
		while (a[i] % 2 != 0)
		{
			i++;
		}

		while (a[j] % 2 != 0)
		{
			j--;
		}

		printf("\n a[%d] = %d, a[%d] = %d", i, a[i], j, a[j]);

		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}

	cout << "\n--";
	printArray(a, length);
}