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

void printArrayByIndex(int arrays[SIZE], int length, int start, int end)
{
	printf("\n");
	for (int i = start; i <= end; i++)
	{
		printf("%d \t", arrays[i]);
	}
}

int main()
{
	int a[100] = { 1, 2, 3, 4, 5, 6 };
	int length = 6;

	printArray(a, length);

	int k = 4;
	int temp_array[100];

	for (int i = 0; i < k; i++)
	{
		temp_array[i] = a[i];
	}

	printArray(temp_array, k);

	int temp = a[0];

	for (int i = 0; i < length - k; i++)
	{
		a[i] = a[i + k];
	}
	
	int index = 0;
	for (int i = length - k; i < length; i++)
	{
		a[i] = temp_array[index];
		index++;
	}

	printArray(a, length);
}