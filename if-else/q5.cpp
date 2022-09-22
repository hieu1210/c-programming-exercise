#include <iostream>
using namespace std;

bool q5(int character){
    return ((character >= 97) && (character <= 122)) ? true : false;
}

int main(){
    char character;

    cout << "Please enter a character : ";
    cin >> character;

    if (q5(character)){
        cout << "The uppercase case is: " << char(character-32) << endl;
    }
    else{
        cout << "The ASCII value is: " << int(character) << endl;
    }

    return 0;
}