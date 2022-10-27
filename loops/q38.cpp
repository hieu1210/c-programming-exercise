#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    int a = sqrt(n);
    for (int i = 2; i <= a; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


void convertPrimeFactors(int n)
{
    int temp = n;
    for (int i = 1; i <= (n / 2 + 1); i++){
        if (checkPrime(i)){
            int count = 0;
            while(temp % i == 0){
                count += 1;
                if (count > 1){
                    printf("%d^%d;", i, count);
                }else{
                    printf("%d;", i);
                }
                temp /= i;
            }
        }
    }
}

int main()
{
    int n;

    cout << "Input an integer: ";
    cin >> n;

    convertPrimeFactors(n);

    return 0;
}