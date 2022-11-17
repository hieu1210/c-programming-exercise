#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    int a = sqrt(n);
    for (int i = 2; i <= a; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool check_even(int arr[], int len){
    for (int i = 0; i < len; i++){
        if(arr[i] % 2 == 1){
            return false;
        }
    }
    return true;
}

bool check_ascending(int arr[], int len){
    for (int i = 1; i < len; i++){
        // printf("arr[%d]: %d; arr[%d]: %d\n", i, arr[i], i-1, arr[i-1]);
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

bool check_prime(int arr[], int len){
    for (int i = 1; i < len; i++){
        if(checkPrime(arr[i])){
            return true;
        }
    }
    return false;
}

int get_first_prime(int arr[], int len){
    for (int i = 1; i < len; i++){
        if(checkPrime(arr[i])){
            return i;
        }
    }
    return -1;
}

bool check_prime_ascending(int arr[], int len){
    int cur_pos;
    for (int i = 1; i < len; i++){
        if(checkPrime(arr[i])){
            cur_pos = i;
        }
    }
    return true;
}


int main()
{
    int arr[] = { 2, 3, 4, 5, 6 };
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;

    // if (check_even(arr, len)){
    //     cout << "The array is even" << endl;
    // }else{
    //     cout << "The array is not even" << endl;
    // }

    if (check_ascending(arr, len)){
        cout << "The array is ascending" << endl;
    }else{
        cout << "The array is not ascending" << endl;
    }


    return 0;
}