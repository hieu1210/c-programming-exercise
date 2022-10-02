#include <iostream>
#include <cmath>
using namespace std;

bool checkDate(int day, int month, int year) {
    if (year >= 1900 && month >= 1 && month <= 12 && day >= 1){
        if ((month == 4 || month == 6 || month == 9 || month == 11) & (day <= 30)){
            return true;
        }
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) & (day <= 31)){
            return true;
        }
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 400 != 0))){
            cout << "This is a leap year." << endl;
            if (month == 2 && day <= 29){
                return true;
            }
        }else if (month == 2 && day <= 28){
            return true;
        }
    }
    return false;
}

/* void PreviousTime(int hour, int minute, int second) {
    second -= 1;

    if (second < 0) {
        second = 59;
        minute -= 1;
        if (minute < 0) {
            minute = 59;
            hour -= 1;
        }
    }
    printf("\nThe previous second is %d:%d:%d.", hour, minute, second);
}

void NextTime(int hour, int minute, int second) {
    second += 1;

    if (second >= 60) {
        second = 0;
        minute += 1;
        if (minute >= 60) {
            minute = 0;
            hour += 1;
        }
    }
    printf("\nThe next second is %d:%d:%d.", hour, minute, second);
} */

int main() {
    int day, month, year;

    cout << "Input three numbers (day, month, year): ";
    cin >> day >> month >> year;

    if (checkDate(day, month, year)) {
        printf("The date %d/%d/%d is valid.", day, month, year);
        // PreviousTime(hour, minute, second);
        // NextTime(hour, minute, second);
    }
    else {
        printf("The date %d/%d/%d is not valid.", day, month, year);
    }

    return 0;
}