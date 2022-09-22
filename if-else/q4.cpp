#include <iostream>
using namespace std;

void calc(int numberOne, int numberTwo){
    cout << "The sum of two numbers: " << numberOne + numberTwo << endl;
    cout << "The difference of two numbers: " << numberOne - numberTwo << endl;
    cout << "The product of two numbers: " << numberOne * numberTwo << endl;
    cout << "The quotient of two numbers: " << float(numberOne) / float(numberTwo) << endl;
    cout << "The remainder of two numbers: " << numberOne % numberTwo << endl;
}

int main(){
    int numberOne, numberTwo;

    cout << "Please enter the first number : ";
    cin >> numberOne;

    cout << "Please enter the second number : ";
    cin >> numberTwo;

    calc(numberOne, numberTwo);

    return 0;
}