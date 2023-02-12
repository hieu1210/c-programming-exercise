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

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int length = sizeof(a) / sizeof(a[0]);
    printArray(a, length);
    printf("\n");

    //to the left
    int temp = a[0]; //remember first element
    for(int i=0; i < length-1;i++)
    {
        a[i] = a[i+1]; //move all element to the left except first one
    }
    a[length-1] = temp; //assign remembered value to last element

    cout << "\n--" << endl;
    printArray(a, length);

    return 0;
}