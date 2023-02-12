#include <iostream>
#include <cmath>
using namespace std;

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

void remove(int a[MAX_SIZE], int& n, int pos) // n here is the array length
{
	if (pos < 0 || pos >= n)
		return;
    
	for (int i = pos; i < n - 1; i++)
	{
        printf("Old: a[%d] = %d\n", i, a[i]);
        a[i] = a[i + 1];
        printf("New: a[%d] = %d\n", i, a[i]);
	}
	a[n - 1] = 0;
    printArray(a, n);
	n--;
    printf("n is %d\n", n);
}

void removeNumber(int a[MAX_SIZE], int& n, int number)
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
    int arr[100] = { 2, 2, 1, 2, 3, 7, 2, 2, 6, 8 };
    int length = 10;
    printArray(arr, length);

    printf("\n");

    // cout << "Enter a number: "; cin >> number;
    int number = 2;
    removeNumber(arr, length, number);

    // cout << "Enter the position you want to insert: "; cin >> pos;
    // cout << "--";
    printf("\n");
	printArray(arr, length);

    // for (i = 0; i < n; i++){
    //     cout << arr[i] << " "; 
    // }
    // cout << endl;

    return 0;
}