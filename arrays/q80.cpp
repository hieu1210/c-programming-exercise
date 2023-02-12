#include <iostream>
#include <cmath>
using namespace std;

// Reverse only the even array
const int MAX_SIZE = 100;

void printArray(int arrays[MAX_SIZE], int length)
{
    for (int i = 0; i < length; i++){
        printf("%d \t", i);
    }
    printf("\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d \t", arrays[i]);
	}
}

int main()
{
    int a[] = { 1, 2, 22, 44, 3, 4, 5, 6, 7, 8, 9 };
    int length = sizeof(a) / sizeof(a[0]);
    printArray(a, length);

    printf("\n");

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

	cout << "\n--" << endl;
    printArray(a, length);

    return 0;
}