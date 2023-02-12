#include <iostream>
#include <cmath>
using namespace std;

// Remove all the numbers exactly once
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
        // printf("Old: a[%d] = %d\n", i, a[i]);
        a[i] = a[i + 1];
        // printf("New: a[%d] = %d\n", i, a[i]);
	}
	a[n - 1] = 0;
    // printArray(a, n);
	n--;
    // printf("n is %d\n", n);
}

void removeDuplicate(int a[MAX_SIZE], int& n)
{
    for (int i = 0; i < n; i++)
	{
        bool found = false;
        for (int j = i+1; j < n; j++){
            if (a[i] == a[j]){
                found = true;
                break;
            }
        }
        if (!found){
            remove(a, n, i);
            i--;
        }
	}
}

int main()
{
    int arr[100] = { 2, 2, 2, 1, 3, 7, 3, 2, 7, 6, 8 };
    int length = 11;
    printArray(arr, length);

    printf("\n");

    // cout << "Enter a number: "; cin >> number;
    removeDuplicate(arr, length);

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