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

int main()
{
	// 0 1 2 3 4 5 6 7 8 9 10
	// 1 4 2 3 1 2 6 8 3 5 7
	int a[100] = { 1, 4, 2, 3, 1, 2, 6, 8, 3, 5, 7, 9 };
	int length = 12;

	int start = 0, end = 0;

	int i = 0;
	while (i < length)
	{
		while (a[i] < a[i + 1])
		{
			i++;
		}

		length_subarray = i - start;
		printf("\n start = %d, end = %d", start, i);
		i++;
		start = i;

		if (i >= length)
			break;
	}

}