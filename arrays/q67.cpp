#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

int remove(int arr[], int len){
    for (int i = 0; i < len; i++){
        printf("%d, %d;    ", i, i+1);
        if (arr[i] > arr[i+1]){
            for (int j=i+2; j < len; j++){
                if (arr[i] <= arr[j]){
                    return j-1;
                }
            }
        }
    }
}

int main()
{
    int arr[] = { 2,3,5,4,5,7,6,8};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;

    printf("\n");
    for (int i = 0; i < len; i++){
        printf("%d \t", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++){
        printf("%d \t", arr[i]);
    }
    cout << endl;

    int i, number, pos, n=10;

    // cout << "Enter a number: "; cin >> number;
    pos = remove(arr, len);
    cout << "Position to be deleted is " << pos;
    
    return 0;
}

// test