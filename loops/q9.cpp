#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int multiplicationStart = 2, multiplicationEnd = 8, step = 2;
    int from = multiplicationStart, to = multiplicationStart + step - 1;

    while (from <= multiplicationEnd)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("\n");
            for (int i = from; i <= to; i++)
            {
                printf("%d x %d = %d  ", i, j, i * j);
            }
        }
        printf("\n\n");

        from = to + 1;
        to = from + step - 1;
        if (to > multiplicationEnd)
        {
            to = multiplicationEnd;
        }
    }
    return 0;
}