#include <iostream>
using namespace std;

// add commment

bool isEven(int number){
    return (number % 2 == 0) ? true : false;
}

int main(){
    int number;

    cout << "Please enter a number (number > 0): " << endl;
    cin >> number;

    cout << "The number is: " << number << endl;

    if (isEven(number)){
        cout << number << " is even." << endl;
    }
    else{
        cout << number << " is odd." << endl;
    }

    return 0;
}