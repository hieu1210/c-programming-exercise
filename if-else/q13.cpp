#include <iostream>
using namespace std;

void isProgression(int a, int b, int c){
    if (c-b == b-a){
        int next = c+(c-b);
        cout << "Arithmetic Progression sequence. Next number of the sequence is: " << next << endl;
    }
    else if (c/b == b/a){
        int next = c*(c/b);
        cout << "Geometric Progression sequence. Next number of the sequence is: " << next << endl;
    }
    else{
        cout << "Not a Progression sequence" << endl;
    }
}


int main() {
	int a, b, c;

    cout << "Please enter the sequence's first three numbers: ";
    cin >> a; cin >> b; cin >> c;

    isProgression(a, b, c);

	return 0;
}