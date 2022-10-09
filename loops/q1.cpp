#include <iostream>
#include <cmath>
using namespace std;

void printNaturalNumbers(int n)
{
    // while
    cout << "While loop";
    int i = 1;
    while (i < n + 1)
    {
        printf("\ni: %d", i);
        i++;
    }

    // for loop
    cout << "\n\nFor loop";
    for (int i = 1; i < n + 1; i++)
    {
        printf("\ni: %d", i);
    }

    // do-while loop
    cout << "\n\nDo-while loop";
    i = 1;
    do
    {
        printf("\ni: %d", i);
        i++;
    } while (i < n + 1);
}

int main()
{
    int n;

    do
    {
        cout << "Please enter a number > 0: ";
        cin >> n;
    } while (n <= 0);

    printNaturalNumbers(n);

    return 0;
}