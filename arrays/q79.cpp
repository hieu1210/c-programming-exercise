#include <iostream>
#include <cmath>
using namespace std;

// Reverse the array
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

void reverseArray(int a[MAX_SIZE], int length)
{
    int temp;
    int middle = length / 2;
    for (int i=0; i < middle; i++){
        temp = a[i];
        a[i] = a[length-1-i];
        a[length-1-i] = temp;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int length = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, length);

    printf("\n");

    // cout << "Enter a number: "; cin >> number;
    reverseArray(arr, length);

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