#include <iostream>
#include <cmath>
using namespace std;

void haveSolution(int a, int b, int c, int d, int e, int f) {
    int D = a * e - d * b;
    int Dx = c * e - f * b;
    int Dy = a * f - d * c;

    cout << "D = " << D << endl;
    cout << "Dx = " << Dx << endl;
    cout << "Dy = " << Dy << endl;

    if (D != 0) {
        cout << "x: " << Dx / (D * 1.0) << endl;
        cout << "y: " << Dy / (D * 1.0) << endl;
    }
    else if ((Dx != 0) || (Dy != 0)) {
        cout << "The system have no solution." << endl;
    }
    else {
        cout << "The system have infinite solutions." << endl;
    }
}


int main() {
    int a, b, c, d, e, f;

    cout << "Please enter the first equation: ";
    cin >> a; cin >> b; cin >> c;

    cout << "Please enter the second equation: ";
    cin >> d; cin >> e; cin >> f;

    haveSolution(a, b, c, d, e, f);

    return 0;
}