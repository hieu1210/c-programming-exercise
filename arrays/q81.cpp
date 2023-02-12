#include <iostream>
#include <cmath>
using namespace std;

// Put all the even numbers at the front of array
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

    int odd_numbers[100], totalOdd = 0;
    int even_numbers[100], totalEven = 0;

    for (int i = 0; i < length; i++){
        if (a[i] % 2 == 0){
            even_numbers[totalEven++] = a[i];
        }
        else{
            odd_numbers[totalOdd++] = a[i];
        }
    }

    for (int i = 0; i < totalEven; i++){
        a[i] = even_numbers[i];
    }

    for (int i = 0; i < totalOdd; i++){
        a[i+totalEven] = odd_numbers[i];
    }

    cout << "\n--" << endl;
    printArray(a, length);
    // printArray(even_numbers, length);
    // printArray(odd_numbers, length);

    // insert_element(a, n, number, 0);

    return 0;
}