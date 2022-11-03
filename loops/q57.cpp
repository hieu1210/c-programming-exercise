#include <iostream>
#include <cmath>
using namespace std;

void sumofTriangular(int n)
{
    int sum = 0; 
    int si = 0;
    for (int i = 0; i <= n; i++){
        si += i;
        sum += si;
    }
    cout << "Sum = " << sum << endl;
}

int main()
{
    int n;

    cout << "Input an integer: ";
    cin >> n;

    sumofTriangular(n);

    return 0;
}