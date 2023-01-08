#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

void remove(int a[MAX_SIZE], int &n, int pos){
    if (pos < 0 || pos >= n){
        return;
    }
    for (int i = pos; i < n-1; i++){
        a[i] = a[i+1];
    }
    a[n-1] = 0;
    n--;
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

    int i = 0;
    while(true){
        while(arr[i] <= arr[i+1]) i++;
        printf("\n i=%d", i);
        remove(arr, len, i+1);
        if (i == len-1) break;
    }
    printf("\n\n");
    for (int i = 0; i < len; i++){
        printf("%d \t", arr[i]);
    }
    
    return 0;
}

// test