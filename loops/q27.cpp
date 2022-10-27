#include <iostream>
#include <cmath>
using namespace std;

void convertInttoBinary(int n)
{
    int binaryNum[32];
    int i = 0;

    while (n != 0){
        // printf("%d", n % 2);
        binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

void convertBinarytoInt(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
    printf("%d", dec_value);
}

int main()
{
    int n;

    cout << "Input an integer or binary: ";
    cin >> n;

    convertBinarytoInt(n);

    return 0;
}