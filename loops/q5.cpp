#include <iostream>
#include <cmath>
using namespace std;

void printSumofConsecutiveIntegers(int n)
{
    int sum = 0;
    int a = 1;

    while (sum <= n)
    {
        if (sum == 0)
        {
            printf("%d", a);
        }
        else
        {
            printf(" + %d", a);
        }
        a += 1;
        sum += a;
    }

    printf(" <= %d", n);
}

int main()
{
    int n;

    cout << "Input an integer (n > 0): ";
    cin >> n;

    printSumofConsecutiveIntegers(n);
    return 0;
}