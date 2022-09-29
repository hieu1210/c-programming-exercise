#include <iostream>
#include <cmath>
using namespace std;

bool isValidTriangle(int side_a, int side_b, int side_c) {
    if ((side_a + side_b > side_c) && (side_c + side_b > side_a) && (side_a + side_c > side_b)) {
        return true;
    }
    return false;
};

int PerimeterTriangle(int side_a, int side_b, int side_c) {
    int perimeter = side_a + side_b + side_c;
    return perimeter;
};

float AreaTriangle(int side_a, int side_b, int side_c) {
    float perimeter = PerimeterTriangle(side_a, side_b, side_c) / 2.0;
    float area = sqrt(perimeter * (perimeter - side_a) * (perimeter - side_b) * (perimeter - side_c));
    return area;
};

int main() {
    int side_a, side_b, side_c;

    cout << "Please enter three sides of a triangle: ";
    cin >> side_a;
    cin >> side_b;
    cin >> side_c;

    if (isValidTriangle(side_a, side_b, side_c)) {
        cout << "Valid Triangle." << endl;
        cout << "Perimeter is " << PerimeterTriangle(side_a, side_b, side_c) << endl;
        cout << "Area is " << AreaTriangle(side_a, side_b, side_c) << endl;
    }
    else {
        cout << "Invalid Triangle." << endl;
    }

    return 0;
}