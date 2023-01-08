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

int findNumber(int arrays[SIZE], int length, int number)
{
	for (int i = 0; i < length; i++)
	{
		if (arrays[i] == number)
			return i;
	}
	return -1;
}

int main()
{
	// 1 2 3
	// 1 1 1
	int a[100] = { 1, 2, 3, 1, 1, 5, 6, 11, 3, 4, 4, 4 };
	int length = 12;

	int value[SIZE];
	int count[SIZE];
	int n = 0;

	for (int i = 0; i < length; i++)
	{
		int pos = findNumber(value, n, a[i]);
		if (pos >= 0 && pos < n)
		{
			count[pos]++;
		}
		else
		{
			value[n] = a[i];
			count[n] = 1;
			n++;
		}
	}

	printArray(value, n);
	printArray(count, n);
}