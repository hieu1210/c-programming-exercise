#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

int count_occurences(int arr[], int n, int x){
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
}

int main()
{
    int arr[] = { 5, 33, 6, 8, 9, 10, 2, 4, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;
    
    return 0;
}