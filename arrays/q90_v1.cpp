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
	// 0 1 2 3 4 5 6 7 8 9 10
	// 1 4 2 3 1 2 6 8 3 5 7
	int a[100] = { 1, 4, 2, 3, 1, 2, 6, 8, 3, 5, 7, 9 };
	int length = 12;

	int start_index[100];
	int end_index[100];
	int length_of_index = 0;

	int start = 0, end = 0;
	int length_subarray = 0, max_subarray = 0;

	int i = 0;
	while (i < length)
	{
		while (a[i] < a[i + 1])
		{
			i++;
		}

		length_subarray = i - start + 1;

		if (length_subarray > max_subarray) {
			max_subarray = length_subarray;
		}

		printf("\n start = %d, end = %d, length = %d", start, i, length_subarray);

		start_index[length_of_index] = start;
		end_index[length_of_index] = i;
		length_of_index++;

		i++;
		start = i;
		length_subarray = 0;
		printf("\n start = %d, i = %d", start, i);

		if (i >= length)
			break;
	}

	printf("\n Length of longest subarray is %d", max_subarray);

	printArray(a, length);

	for (int i = 0; i < length_of_index; i++)
	{
		if (end_index[i] - start_index[i] + 1 == max_subarray)
		{
			printArrayByIndex(a, length, start_index[i], end_index[i]);
		}
	}
}