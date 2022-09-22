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

void PrintMaxAndVaribleName(int num1, int num2, int num3)
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

int main() {
    int num1, num2, num3;

    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please enter the third number: ";
    cin >> num3;

    int sum = num1+num2+num3;
    int max = FindMaxBetweenThreeNumbers(num1, num2, num3);
    int min = FindMinBetweenThreeNumbers(num1, num2, num3);

    cout << "Sum: " << sum << "; Max: " << max << "; Min: " << min << endl;

    int secondLargest = sum-max-min;
    cout << "The second largest number is: " << secondLargest << endl;

    return 0;
}