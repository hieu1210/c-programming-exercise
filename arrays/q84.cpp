#include <iostream>
#include <cmath>
using namespace std;

// Shift k times (use sub-array)
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

int maxArray(int arrays[MAX_SIZE], int length)
{
	int max = arrays[0];
    for (int i = 1; i < length; i++)
	{
		if (arrays[i] > max){
            max = arrays[i];
        }
	}
    return max;
}

void count_pairs(int a[MAX_SIZE], int length, int max)
{
	int count = 0;
    for (int i = 0; i < length; i++)
	{
        for (int j = i+1; j < length; j++)
        {
            if(a[i] + a[j] == max){
                printf("a[%d] = %d; a[%d] = %d\n", i, a[i], j, a[j]);
                ++count;
            }
        }
	}
    printf("There are %d pairs that sum up to max", count);
}

int main()
{
    int a[] = { 8, 6, 3, 7, 1, 4, 5, 11 };

    int length = sizeof(a) / sizeof(a[0]);
    printArray(a, length);
    printf("\n");

    int max = maxArray(a, length);
    count_pairs(a, length, max);

    // cout << "\n--" << endl;
    // printArray(a, length);

    return 0;
}