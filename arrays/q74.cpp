#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

bool checking_element(int arr[], int &n, int number){
    for (int x = 0; x < n; x++){
        if(arr[x] == number){
            return true;
        }
    }
    return false;
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

    cout << "Enter a number: "; cin >> number;
    // cout << "Enter the position you want to insert: "; cin >> pos;

    if(checking_element(arr, n, number)){
        cout << 
    }

    for (i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}