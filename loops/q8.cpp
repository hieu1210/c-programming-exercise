#include <iostream>
#include <cmath>
using namespace std;

void printMultiplicationTable(int n)
{
    printf("The multiplication table of %d:", n);

    for (int i = 1; i < 11; i++)
    {
        printf("\n%d x %d = %d", n, i, n*i);
    }
    printf("\n\n");
}

int main()
{
    for (int j = 2; j < 10; j++)
    {
        printMultiplicationTable(j);
    }
    return 0;
}