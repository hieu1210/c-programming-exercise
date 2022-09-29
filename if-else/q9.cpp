#include <iostream>
#include <cmath>
using namespace std;

bool checkingValidTriangle(int side_a, int side_b, int side_c){
    if ((side_a + side_b > side_c) & (side_c + side_b > side_a) & (side_a + side_c > side_b)){
        return true;
    }
    else{
        return false;
    }
};

void PerimeterTriangle(int side_a, int side_b, int side_c){
    int perimeter = side_a + side_b + side_c;
    cout << "Perimeter is " << perimeter << endl;
};

void AreaTriangle(int side_a, int side_b, int side_c){
    int perimeter_a = (side_a + side_b + side_c) / 2;

    int area = sqrt(perimeter_a * (perimeter_a - side_a) * (perimeter_a - side_b) * (perimeter_a - side_c));
    cout << "Area is " << area << endl;
};

int main() {
    int side_a, side_b, side_c;
    cout << "Please enter three sides of a triangle: ";
    cin >> side_a;
    cin >> side_b;
    cin >> side_c;

    if (checkingValidTriangle(side_a, side_b, side_c)){
        cout << "Valid Triangle." << endl;
        PerimeterTriangle(side_a, side_b, side_c);
        AreaTriangle(side_a, side_b, side_c);
    }
    else{
        cout << "Invalid Triangle." << endl;
    }

    return 0;
}