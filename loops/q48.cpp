#include <iostream>
#include <cmath>
using namespace std;

void sumofFractions(int n)
{
    double i, s = 0.0;
    for (int i = 1; i <= n; i++){
        s += (1.0/i);
        cout << s << endl;
    }
    cout << "Sum = " << s << endl;
}

int main()
{
    int n;

    cout << "Input an integer: ";
    cin >> n;

    sumofFractions(n);

    return 0;
}