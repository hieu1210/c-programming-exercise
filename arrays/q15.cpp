#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

int* delete_element(int arr[], int &n, int pos){
    if ((pos < 0) || (pos >= n)){
        cout << "No valid insert position" << endl;
        return arr;
    }

    int i;
    n--;
    for (i = pos; i < n; i++){
        arr[i] = arr[i+1];
    }

    return arr;
}

int main()
{
    int arr[MAX_SIZE] = { 0 };
    int i, number, pos, n=10;

    for (i = 0; i < n; i++){
        arr[i] = i+1;
    }

    for (i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    cout << "Enter the position you want to delete: "; cin >> pos;

    delete_element(arr, n, pos);

    for (i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}