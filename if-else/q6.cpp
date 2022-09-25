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
    int Max1 = FindMaxBetweenThreeNumbers(num1, num2, num3);
    int Max2 = FindMaxBetweenThreeNumbers(num4, num5, num6);
    int Max = (Max1 > Max2) ? Max1 : Max2;
    cout << "Max is: " << Max << " and the variable is ";

    if (Max == num1){
        cout << "'num1'" << endl;
    }
    else if (Max == num2)
    {
        cout << "'num2'" << endl;
    }
    else if (Max == num3)
    {
        cout << "'num3'" << endl;
    }
    else if (Max == num4)
    {
        cout << "'num4'" << endl;
    }
    else if (Max == num5)
    {
        cout << "'num5'" << endl;
    }
    else
    {
        cout << "'num6'" << endl;
    }
}

void FindSecondLargestBetweenSixNumbers(int num1, int num2, int num3, int num4, int num5, int num6){
    int MaxThreeNumbers1 = FindMaxBetweenThreeNumbers(num1, num2, num3);
    int MaxThreeNumbers2 = FindMaxBetweenThreeNumbers(num4, num5, num6);
    int Max1 = (MaxThreeNumbers1 > MaxThreeNumbers2) ? MaxThreeNumbers1 : MaxThreeNumbers2;

    int MinThreeNumbers1 = FindMinBetweenThreeNumbers(num1, num2, num3);
    int MinThreeNumbers2 = FindMinBetweenThreeNumbers(num4, num5, num6);
    int Min1 = (MinThreeNumbers1 < MinThreeNumbers2) ? MinThreeNumbers1 : MinThreeNumbers2;

    int Max2 = Min1;

    if ((num1 > Max2) && (num1 < Max1)){
        Max2 = num1;
    }
    if ((num2 > Max2) && (num2 < Max1)){
        Max2 = num2;
    }
    if ((num3 > Max2) && (num3 < Max1)){
        Max2 = num3;
    }
    if ((num4 > Max2) && (num4 < Max1)){
        Max2 = num4;
    }
    if ((num5 > Max2) && (num5 < Max1)){
        Max2 = num5;
    }
    if ((num6 > Max2) && (num6 < Max1)){
        Max2 = num6;
    }

    cout << "The second largest number is: " << Max2 << endl;
}

int main() {
    int num1, num2, num3, num4, num5, num6;

    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please enter the third number: ";
    cin >> num3;

    // only need this section for 6 numbers
    cout << "Please enter the fourth number: ";
    cin >> num4;

    cout << "Please enter the fifth number: ";
    cin >> num5;

    cout << "Please enter the sixth number: ";
    cin >> num6;

    // Question 6 Part a
    // PrintMaxofThreeAndVariableName(num1, num2, num3)

    // Question 6 Part b
    /* int sum = num1+num2+num3;
    int max = FindMaxBetweenThreeNumbers(num1, num2, num3);
    int min = FindMinBetweenThreeNumbers(num1, num2, num3);
    int secondLargest = sum-max-min;
    cout << "The second largest number is: " << secondLargest << endl; */

    // Question 6 Part c
    // Find max and variable for 6 numbers
    // PrintMaxofSixAndVariableName(num1, num2, num3, num4, num5, num6);
    // Find second largest of 6 numbers
    FindSecondLargestBetweenSixNumbers(num1, num2, num3, num4, num5, num6);

    return 0;
}