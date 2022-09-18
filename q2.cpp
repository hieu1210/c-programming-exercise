#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Please enter a number (number > 0): ";
    cin >> number;

    cout << "The number is: " << number << endl;

    if (number % 2 == 0){
        number *= 2;
        cout << "The new number is " << number << endl;
    }

    return 0;
}