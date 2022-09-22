#include <iostream>
using namespace std;

bool q3(int number){
    return (number >= 5) ? true : false;
}

int main(){
    int number;

    cout << "Please enter a number : ";
    cin >> number;

    if (q3(number)){
        number += 2;
    }
    else{
        number = 0;
    }
    cout << "The new number is " << number << endl;

    return 0;
}