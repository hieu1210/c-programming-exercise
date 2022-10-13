#include <iostream>
#include <cmath>
using namespace std;

// Question 1a
void printNumbers(int n)
{
    // while
    cout << "While loop" << endl;
    int i = 1;
    while (i <= n)
    {
        printf("%d; ", i);
        i++;
    }

    // for loop
    cout << "\n\nFor loop" << endl;
    for (int i = 1; i <= n; i++)
    {
        printf("%d; ", i);
    }

    // do-while loop
    cout << "\n\nDo-while loop" << endl;
    i = 1;
    do
    {
        printf("%d; ", i);
        i++;
    } while (i <= n);
}

// Question 1b
void printNumbersReverse(int n)
{
    // while
    cout << "While loop" << endl;
    int i = n;
    while (i >= 1)
    {
        printf("%d; ", i);
        i--;
    }

    // for loop
    cout << "\n\nFor loop" << endl;
    for (int i = n; i >= 1; i--)
    {
        printf("%d; ", i);
    }

    // do-while loop
    cout << "\n\nDo-while loop" << endl;
    i = n;
    do
    {
        printf("%d; ", i);
        i--;
    } while (i >= 1);
}

// Question 1c
void printOddNumbers(int n)
{
    // while
    cout << "While loop" << endl;
    int i = 1;
    while (i <= n)
    {
        printf("%d; ", i);
        i += 2;
    }

    // for loop
    cout << "\n\nFor loop" << endl;
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d; ", i);
    }

    // do-while loop
    cout << "\n\nDo-while loop" << endl;
    i = 1;
    do
    {
        i += 2;
    } while (i <= n);
}

// Question 1d
void printSumNumbers(int n)
{
    // while
    cout << "While loop" << endl;
    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        printf("%d; ", i);
        sum += i;
        i++;
    }
    printf("\nSum: %d", sum);

    // for loop
    cout << "\n\nFor loop" << endl;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("%d; ", i);
        sum += i;
    }
    printf("\nSum: %d", sum);

    // do-while loop
    cout << "\n\nDo-while loop" << endl;
    sum = 0;
    i = 1;
    do
    {
        printf("%d; ", i);
        sum += i;
        i++;
    } while (i <= n);
    printf("\nSum: %d", sum);
}

// Question 1e
void printSumEvenNumbers(int n)
{
    // while
    cout << "While loop" << endl;
    int sum = 0;
    int i = 2;
    while (i <= n)
    {
        printf("%d; ", i);
        sum += i;
        i += 2;
    }
    printf("\nSum: %d", sum);

    // for loop
    cout << "\n\nFor loop" << endl;
    sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d; ", i);
        sum += i;
    }
    printf("\nSum: %d", sum);

    // do-while loop
    cout << "\n\nDo-while loop" << endl;
    sum = 0;
    i = 2;
    do
    {
        printf("%d; ", i);
        sum += i;
        i += 2;

    } while (i <= n);
    printf("\nSum: %d", sum);
}

int main()
{
    int n;

    do
    {
        cout << "Please enter a number > 0: ";
        cin >> n;
    } while (n <= 0);

    printSumEvenNumbers(n);

    return 0;
}