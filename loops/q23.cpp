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

int reverseDigits(int num)
{
    int rev_num = 0;
    int temp = num;
    while (temp > 0)
    {
        rev_num = rev_num * 10 + temp % 10;
        temp /= 10;
    }
    return rev_num;
}

bool checkPalindromic(int num)
{
    int rev_num = 0;
    int temp = num;
    while (temp > 0)
    {
        rev_num = rev_num * 10 + temp % 10;
        temp /= 10;
    }
    return (rev_num == num);
}

bool checkFriendly(int num)
{
    int rev_num = reverseDigits(num);

    if ((checkPrime(num) == true) || (checkPrime(rev_num) == true))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int countDigits(int n)
{
    int x = 0;
    int count = 0;
    while (n > 0)
    {
        x = n % 10;
        count += 1;
        n /= 10;
    }
    return count;
}

bool checkArmstrong(int n)
{
    int count = countDigits(n);

    int x = 0;
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        x = temp % 10;
        sum += (pow(x, count));
        temp /= 10;
    }

    return (sum == n);
}

bool checkLucky(int n)
{
    while (n != 0)
    {
        int x = n % 10;
        if (!(n == 6 || n == 8))
        { // (n != 6) && (n != 8)
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n;

    cout << "Input an integer: ";
    cin >> n;

    // question 23a
    // printf("The reverse of %d is %d", n, reverseDigits(n));

    // question 23b
    // if (checkPalindromic(n))
    // {
    //     printf("%d is a palindromic number", n);
    // }
    // else
    // {
    //     printf("%d is not a palindromic number", n);
    // }

    // question 23c
    // if ((checkPalindromic(n) == true) && (checkPrime(n) == true))
    // {
    //     printf("%d is a prime palindromic number", n);
    // }
    // else
    // {
    //     printf("%d is not a prime palindromic number", n);
    // }

    // question 23d
    // if (checkFriendly(n))
    // {
    //     printf("%d is a friendly number", n);
    // }
    // else
    // {
    //     printf("%d is not a friendly number", n);
    // }

    // question 23e
    // if (checkArmstrong(n))
    // {
    //     printf("%d is an Armstrong number", n);
    // }
    // else
    // {
    //     printf("%d is not an Armstrong number", n);
    // }

    // question 23f
    if (checkLucky(n))
    {
        printf("%d is a lucky number", n);
    }
    else
    {
        printf("%d is not a lucky number", n);
    }

    return 0;
}