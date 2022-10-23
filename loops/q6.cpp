#include <iostream>
#include <cmath>
using namespace std;

bool checkPrimeNumber(int n)
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

bool checkPerfectNumber(int n)
{
    if (n <= 0)
    {
        return false;
    }

    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return (sum == n);
}

bool checkSquareNumber(int n)
{
    if (n <= 0)
    {
        return false;
    }

    int a = sqrt(n);

    return (a * a == n);
}

int main()
{
    int n;

    cout << "Input an integer (n > 0): ";
    cin >> n;

    // if (checkPrimeNumber(n))
    // {
    //     printf("%d is a prime number", n);
    // }
    // else
    // {
    //     printf("%d is not a prime number", n);
    // }
    // printf("\n");
    // for (int j=1; j <= n; j++){
    //     if(checkPrimeNumber(j)){
    //         printf("%d; ", j);
    //     }
    // }
    // printf("\n\n");

    if (checkSquareNumber(n))
    {
        printf("%d is a square number", n);
    }
    else
    {
        printf("%d is not a square number", n);
    }
    printf("\n");
    for (int j = 1; j <= n; j++)
    {
        if (checkSquareNumber(j))
        {
            printf("%d; ", j);
        }
    }

    return 0;
}