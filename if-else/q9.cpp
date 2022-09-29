#include <iostream>
#include <cmath>
using namespace std;

bool isValidTriangle(int side_a, int side_b, int side_c) {
    if ((side_a + side_b > side_c) && (side_c + side_b > side_a) && (side_a + side_c > side_b)) {
        return true;
    }
    return false;
};

float PerimeterTriangle(int side_a, int side_b, int side_c) {
    float perimeter = side_a + side_b + side_c;
    return perimeter;
};

float AreaTriangle(int side_a, int side_b, int side_c) {
    float perimeter = PerimeterTriangle(side_a, side_b, side_c) / 2.0;
    float area = sqrt(perimeter * (perimeter - side_a) * (perimeter - side_b) * (perimeter - side_c));
    return area;
};

void HeightTriangle(int side_a, int side_b, int side_c) {
    float area = AreaTriangle(side_a, side_b, side_c);
    float height_a = 2 * area / side_a;
    float height_b = 2 * area / side_b;
    float height_c = 2 * area / side_c;

    cout << "Height of side a: " << height_a << "; Height of side b: " << height_b << "; Height of side c: " << height_c << endl;
}

bool TypeTriangle(int side_a, int side_b, int side_c){
    bool equilateral, isosceles, right;
    if ((side_a == side_b == side_c)){
        equilateral = true;
        cout << "It's an equilateral triangle." << endl;
        return true;
    }
    if ((side_a == side_b) || (side_b == side_c) || (side_a == side_c)){
        isosceles = true;
        cout << "It's an isosceles triangle." << endl;
        return true;
    }
    if (((side_a*side_a + side_b*side_b) == side_c*side_c) || ((side_c*side_c + side_b*side_b) == side_a*side_a) || ((side_a*side_a + side_c*side_c) == side_b*side_b)){
        right = true;
        cout << "It's a right triangle." << endl;
        return true;
    }
    if ((isosceles == true) && (right == true)){
        cout << "It's an isosceles triangle." << endl;
        return true;
    }
    return false;
}

int main() {
    float side_a, side_b, side_c;

    cout << "Please enter three sides of a triangle: ";
    cin >> side_a;
    cin >> side_b;
    cin >> side_c;

    if (isValidTriangle(side_a, side_b, side_c)) {
        cout << "Valid Triangle." << endl;
        cout << "Perimeter is " << PerimeterTriangle(side_a, side_b, side_c) << endl;
        cout << "Area is " << AreaTriangle(side_a, side_b, side_c) << endl;
        HeightTriangle(side_a, side_b, side_c);
        TypeTriangle(side_a, side_b, side_c);
        if(!(TypeTriangle(side_a, side_b, side_c))){
            cout << "It's a scalene triangle." << endl;
        }
    }
    else {
        cout << "Invalid Triangle." << endl;
    }

    return 0;
}