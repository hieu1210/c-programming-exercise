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
    
    if (Max == num1){
        cout << "Max is: " << Max << " and variable name is 'num1'" << endl;
    }
    
    if (Max == num2)
    {
        cout << "Max is: " << Max << " and variable name is 'num2'" << endl;
    }

    if (Max == num3)
    {
        cout << "Max is: " << Max << " and variable name is 'num3'" << endl;
    }

    if (Max == num4)
    {
        cout << "Max is: " << Max << " and variable name is 'num4'" << endl;
    }

    if (Max == num5)
    {
        cout << "Max is: " << Max << " and variable name is 'num5'" << endl;
    }

    if (Max == num6)
    {
        cout << "Max is: " << Max << " and variable name is 'num6'" << endl;
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

    // only need this section for 6 numbers
    cout << "Please enter the fourth number: ";
    cin >> num4;

    cout << "Please enter the fifth number: ";
    cin >> num5;

    cout << "Please enter the sixth number: ";
    cin >> num6;

    // Question 6 Part a
    /* PrintMaxofThreeAndVariableName(num1, num2, num3)
    int sum = num1+num2+num3;
    int max = FindMaxBetweenThreeNumbers(num1, num2, num3);
    int min = FindMinBetweenThreeNumbers(num1, num2, num3);
    int secondLargest = sum-max-min;
    cout << "The second largest number is: " << secondLargest << endl; */

    // Find max between 6 number
    // int Max1 = FindMaxBetweenThreeNumbers(num1, num2, num3);
    // int Max2 = FindMaxBetweenThreeNumbers(num4, num5, num6);
    // int Max = (Max1 > Max2) ? Max1 : Max2;
    // printf("\nMax = %d", Max);
    PrintMaxofSixAndVariableName(num1, num2, num3, num4, num5, num6);

    
	
	// Find the second largest of six number
    // num1 = 10, num2 = 1, num3 = 9, num4 = 7, num5 = 5, num6 = 1;
    // 1. max1 = 10
    // 2. min = 1
    // 3. max2 = min
    // 4. check every number > max2 && < max1
    // 5. if (number > max2 && number < max1) => max2 = number
    // 


    return 0;
}