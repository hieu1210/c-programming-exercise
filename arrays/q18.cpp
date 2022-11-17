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

bool check_even(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 1) {
            return false;
        }
    }
    return true;
}

bool check_ascending(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        // printf("arr[%d]: %d; arr[%d]: %d\n", i, arr[i], i-1, arr[i-1]);
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

bool check_prime(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (checkPrime(arr[i])) {
            return true;
        }
    }
    return false;
}

int get_first_prime(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (checkPrime(arr[i])) {
            return i;
        }
    }
    return -1;
}

bool check_prime_ascending(int arr[], int len) {
    int first_prime_pos = get_first_prime(arr, len);
    if (first_prime_pos == -1)
    {
        printf("\n There are no prime number in the array");
        return false;
    }

    for (int i = first_prime_pos + 1; i < len; i++)
    {
        if (checkPrime(arr[i])) {
            printf("\n pre: a[%d] = %d, current: a[%d] = %d", first_prime_pos, arr[first_prime_pos], i, arr[i]);

            if (arr[first_prime_pos] > arr[i])
                return false;

            first_prime_pos = i;
        }
    }

    return true;
}


int main()
{
    int arr[] = { 1, 4, 2, 6, 8, 7, 4, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;

    // if (check_even(arr, len)){
    //     cout << "The array is even" << endl;
    // }else{
    //     cout << "The array is not even" << endl;
    // }

    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d \t", i);
    }

    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d \t", arr[i]);
    }

    if (check_prime_ascending(arr, len)) {
        cout << "\n The array is ascending" << endl;
    }
    else {
        cout << "\n The array is not ascending" << endl;
    }


    return 0;
}