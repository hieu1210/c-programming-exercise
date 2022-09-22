#include <iostream>
using namespace std;

int FindMaxBetweenThreeNumbers(int num1, int num2, int num3) {
    if ((num1 < num2) && (num2 < num3)) {
        return num3;
    }
    else if ((num1 > num2) && (num2 > num3)) {
        return num1;
    }
    else {
        return num2;
    }

    /*if (num1 > num2 && num1 > num3)
        return num1;
    else
        if (num2 > num1 && num2 > num3)
            return num2;
        else
            return num3;

    int Max = num1;
    if (Max < num2)
        Max = num2;
    if (Max < num3)
        Max = num3;
    return Max;*/
}

void PrintMaxAndVaribleName(int num1, int num2, int num3)
{
    int Max = num1;
    char varibleName = '1';

    if (Max < num2)
    {
        Max = num2;
        varibleName = '2';
    }

    if (Max < num3)
    {
        Max = num3;
        varibleName = '3';
    }

    printf("\nMaximum value between %d, %d, %d is %d", num1, num2, num3, Max);
    switch (varibleName)
    {
    case '1':
        printf("\n varible name is 'num1'");
        break;
    case '2':
        printf("\n varible name is 'num2'");
        break;
    case '3':
        printf("\n varible name is 'num3'");
        break;
    }
}

int main() {
    int num1, num2, num3;

    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please enter the third number: ";
    cin >> num3;

    PrintMaxAndVaribleName(num1, num2, num3);

    return 0;
}