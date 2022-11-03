#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

void input_user(int &total)
{
    do
    {
        cout << "Enter how many values to input into the array: ";
        cin >> total;
    } while (total > MAX_SIZE || total <= 0);
}

void input_value_array(int array[MAX_SIZE], int total)
{
    for (int i = 0; i < total; i++)
    {
        cout << "Enter the value for position " << i << ": ";
        cin >> array[i];
    }
}

void output_value_array(int array[MAX_SIZE], int total)
{
    for (int i = 0; i < total; i++)
    {
        cout << "Position " << i << ": " << array[i] << " \n";
    }
}

void create_random_array(int array[MAX_SIZE], int total)
{
    for (int i = 0; i < total; i++)
    {
        array[i] = rand();
        cout << "Position " << i << ": " << array[i] << " \n";
    }
}

void sum_of_even_array(int array[MAX_SIZE], int total)
{
    int sum = 0;
    for (int i = 0; i < total; i++)
    {
        if (array[i] % 2 == 0)
        {
            sum += array[i];
        }
    }
    cout << "The sum of all even values are: " << sum;
}

int main()
{
    int array[MAX_SIZE], i, total;

    input_user(total);
    // create_random_array(array, total);
    input_value_array(array, total);
    sum_of_even_array(array, total);
    // output_value_array(array, total);

    return 0;
}