#include <iostream>
#include <cmath>
using namespace std;

bool checkingPowerofTwo(int n)
{
    int p = 1;

    while (p <= n)
    {
        p *= 2;
    }

    return (p / 2 == n) ? true : false;
}

void printingPowerofTwo(int n)
{
    int p = 1;

    while (p <= n)
    {
        printf("%d; ", p);
        p *= 2;
    }
}

int main()
{
    int n;

    cout << "Input an integer (n > 0): ";
    cin >> n;

    if (checkingPowerofTwo(n))
    {
        printf("%d is a power of two", n);
    }
    else
    {
        printf("%d is not a power of two", n);
    }

    // printingPowerofTwo(n);

    return 0;
}