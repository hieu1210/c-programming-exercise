#include <iostream>
using namespace std;

void SplitThreeDigits(int num){
    if ((num < 100) || (num > 999)){
        cout << "Invalid" << endl;
        return;
    }
    
    int digit1 = num / 100;
    int digit2 = num % 100 / 10;
    int digit3 = num % 10;

    cout << "Digit 1: " << digit1 << endl;
    cout << "Digit 2: " << digit2 << endl;
    cout << "Digit 3: " << digit3 << endl;
}

void SplitSixDigits(int num){
    if ((num < 100000) || (num > 999999)){
        cout << "Invalid" << endl;
        return;
    }
    
    int digit1 = num / 100000;
    int digit2 = num % 100000 / 10000;
    int digit3 = num % 10000 / 1000;
    int digit4 = num % 1000 / 100;
    int digit5 = num % 100 / 10;
    int digit6 = num % 10;

    cout << "Digit 1: " << digit1 << endl;
    cout << "Digit 2: " << digit2 << endl;
    cout << "Digit 3: " << digit3 << endl;
    cout << "Digit 4: " << digit4 << endl;
    cout << "Digit 5: " << digit5 << endl;
    cout << "Digit 6: " << digit6 << endl;
}

void SplitSixDigits2(int num){
    if ((num < 100000) || (num > 999999)){
        cout << "Invalid" << endl;
        return;
    }
    
    int num1 = num / 1000;
    int digit1 = num1 / 100;
    int digit2 = num1 % 100 / 10;
    int digit3 = num1 % 10;
    cout << "Digit 1: " << digit1 << endl;
    cout << "Digit 2: " << digit2 << endl;
    cout << "Digit 3: " << digit3 << endl;

    int num2 = num % 1000;
    int digit4 = num2 / 100;
    int digit5 = num2 % 100 / 10;
    int digit6 = num2 % 10;
    cout << "Digit 4: " << digit4 << endl;
    cout << "Digit 5: " << digit5 << endl;
    cout << "Digit 6: " << digit6 << endl;
}

int main() {
    int three, six;

    // use this section for 3-digit number
    /* cout << "Please enter a 3-digit number: ";
    cin >> three;
    SplitThreeDigits(three); */

    // use this for 6-digit number
    cout << "Please enter a 6-digit number: ";
    cin >> six;
    SplitSixDigits(six);

    return 0;
}