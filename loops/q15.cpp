#include <iostream>
#include <cmath>
using namespace std;

void cutRighttoLeft(int n)
{
    int x = 0;
    while(n>0){
        x = n % 10;
        printf("%d; ", x);
        n /= 10;
    }
}

void cutLefttoRight(int n)
{
    int k = 1;
    while(k<n){
        k *= 10;
    }

    k /= 10;
    
    int x = 0;
    while(n>0){
        x = n / k;
        printf("%d; ", x);
        n %= k;
        k /= 10;
    }
}

int main()
{
    int n;

    cout << "Input an integer: ";
    cin >> n;

    cutRighttoLeft(n); //question 15a
    cutLefttoRight(n); //question 15b

    return 0;
}