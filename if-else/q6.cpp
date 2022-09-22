#include <iostream>
using namespace std;

int q6a(int num1, int num2, int num3){
    if ((num1 < num2) && (num2 < num3)){
        return num3;
    }
    else if((num1 > num2) && (num2 > num3)){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int num1, num2, num3;

    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please enter the third number: ";
    cin >> num3;

    if (q6a(num1, num2, num3) == num1){
        cout << "The maximum is: " << num1 << " and the variable is num1" << endl;
    }
    else if (q6a(num1, num2, num3) == num2){
        cout << "The maximum is: " << num2 << " and the variable is num2" << endl;
    }
    else{
        cout << "The maximum is: " << num3 << " and the variable is num3" << endl;
    }

    return 0;
}