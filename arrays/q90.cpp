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
	int a[100] = { 1, 4, 2, 3, 1, 2, 6, 8, 3, 5, 7, 9, 11};
	int length = 12;

	int start = 0, end = 0;

	int length_subarray, max_subarray;

	int i = 0;
	while (i < length)
	{
		while (a[i] < a[i + 1])
		{
			i++;
            // length_subarray++;
		}

		length_subarray = i - start;

        if (max_subarray > length_subarray){
            max_subarray = length_subarray;
        }

		printf("\n start = %d, end = %d, length = %d", start, i, length_subarray);
		i++;
		start = i;
        length_subarray = 0;
        printf("\n start = %d, i = %d", start, i);

		if (i >= length)
            // printf("\n Length of longest subarray is %d", max_subarray);
			break;
	}
    printf("\n Length of longest subarray is %d", max_subarray);

}