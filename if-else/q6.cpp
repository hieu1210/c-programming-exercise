#include <iostream>
using namespace std;

int FindMaxBetweenThreeNumbers(int num1, int num2, int num3) {
    int Max = num1;

    if (Max < num2)
    {
        Max = num2;
    }

    if (Max < num3)
    {
        Max = num3;
    }
    return Max;
}

int FindMaxBetweenSixNumbers(int num1, int num2, int num3, int num4, int num5, int num6) {
    int Max = num1;

    if (Max < num2)
    {
        Max = num2;
    }

    if (Max < num3)
    {
        Max = num3;
    }

    if (Max < num4)
    {
        Max = num4;
    }

    if (Max < num5)
    {
        Max = num5;
    }

    if (Max < num6)
    {
        Max = num6;
    }
    return Max;
}

int FindMinBetweenThreeNumbers(int num1, int num2, int num3) {
    int Min = num1;

    if (num2 < Min)
    {
        Min = num2;
    }

    if (num3 < Min)
    {
        Min = num3;
    }
    return Min;
}

void PrintMaxofThreeAndVariableName(int num1, int num2, int num3)
{
    int Max = num1;
    char variableName = '1';

    if (Max < num2)
    {
        Max = num2;
        variableName = '2';
    }

    if (Max < num3)
    {
        Max = num3;
        variableName = '3';
    }

    printf("\nMaximum value between %d, %d, %d is %d", num1, num2, num3, Max);
    switch (variableName)
    {
    case '1':
        printf("\n variable name is 'num1'");
        break;
    case '2':
        printf("\n variable name is 'num2'");
        break;
    case '3':
        printf("\n variable name is 'num3'");
        break;
    }
}

void PrintMaxofSixAndVariableName(int num1, int num2, int num3, int num4, int num5, int num6)
{
    int Max = num1;
    char variableName = '1';

    if (Max < num2)
    {
        Max = num2;
        variableName = '2';
    }

    if (Max < num3)
    {
        Max = num3;
        variableName = '3';
    }

    if (Max < num4)
    {
        Max = num4;
        variableName = '4';
    }

    if (Max < num5)
    {
        Max = num5;
        variableName = '5';
    }

    if (Max < num6)
    {
        Max = num6;
        variableName = '6';
    }

    // printf("\nMaximum value between %d, %d, %d is %d", num1, num2, num3, Max);
    printf("\nMaximum value is %d", Max);
    switch (variableName)
    {
    case '1':
        printf(" and variable name is 'num1'");
        break;
    case '2':
        printf(" and variable name is 'num2'");
        break;
    case '3':
        printf(" and variable name is 'num3'");
        break;
    case '4':
        printf(" and variable name is 'num4'");
        break;
    case '5':
        printf(" and variable name is 'num5'");
        break;
    case '6':
        printf(" and variable name is 'num6'");
        break;
    }
}

int main() {
    int num1, num2, num3, num4, num5, num6;

    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please enter the third number: ";
    cin >> num3;

    cout << "Please enter the fourth number: ";
    cin >> num4;

    cout << "Please enter the fifth number: ";
    cin >> num5;

    cout << "Please enter the sixth number: ";
    cin >> num6;

    // Find max between 6 number
    /*int Max1 = FindMaxBetweenThreeNumbers(num1, num2, num3);
    int Max2 = FindMaxBetweenThreeNumbers(num4, num5, num6);
    int Max = (Max1 > Max2) ? Max1 : Max2;
    printf("\nMax = %d", Max);*/

    // int sum = num1+num2+num3;
    // int max = FindMaxBetweenThreeNumbers(num1, num2, num3);
    // int min = FindMinBetweenThreeNumbers(num1, num2, num3);


    PrintMaxofSixAndVariableName(num1, num2, num3, num4, num5, num6);

    // cout << "Sum: " << sum << "; Max: " << max << "; Min: " << min << endl;

    // int secondLargest = sum-max-min;
    // cout << "The second largest number is: " << secondLargest << endl;

    return 0;
}