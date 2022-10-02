#include <iostream>
#include <cmath>
using namespace std;

int daysofMonth(int month, int year){
    int MaxDay = 0;
    switch (month)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        MaxDay = 31;
        break;
    case 4:case 6:case 9:case 11:
        MaxDay = 30;
        break;
    case 2:
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 400 != 0))) {
            MaxDay = 29;
        }
        else
        {
            MaxDay = 28;
        }
    }
    return MaxDay;
}

bool checkDate(int day, int month, int year) {
    if (!(year >= 1900)) {
        return false;
    }

    if (!(month >= 1 && month <= 12)){
        return false;
    }

    int MaxDay = daysofMonth(month, year);
    

    if (!(day >= 1 && day <= MaxDay)) {
        return false;
    }
    return true;

    /*if (year >= 1900 && month >= 1 && month <= 12 && day >= 1) {
        if ((month == 4 || month == 6 || month == 9 || month == 11) & (day <= 30)) {
            return true;
        }
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) & (day <= 31)) {
            return true;
        }
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 400 != 0))) {
            cout << "This is a leap year." << endl;
            if (month == 2 && day <= 29) {
                return true;
            }
        }
        else if (month == 2 && day <= 28) {
            return true;
        }
    }
    return false;*/
}

void PreviousDay(int day, int month, int year) {
    day -= 1;

    if (day <= 0) {
        month -= 1;
        if (month <= 0) {
            month = 12;
            year -= 1;
        }
        day = daysofMonth(month, year);
    }
    printf("\nYesterday is %d/%d/%d.", day, month, year);
}

void NextDay(int day, int month, int year) {
    int MaxDay = daysofMonth(month, year);

    day += 1;

    if (day > MaxDay) {
        month += 1;
        if (month > 12) {
            month = 1;
            year += 1;
        }
        day = 1;
    }
    printf("\nTomorrow is %d/%d/%d.", day, month, year);
}

int main() {
    int day, month, year;

    cout << "Input three numbers (day, month, year): ";
    cin >> day >> month >> year;

    if (checkDate(day, month, year)) {
        printf("The date %d/%d/%d is valid.", day, month, year);
        PreviousDay(day, month, year);
        NextDay(day, month, year);
    }
    else {
        printf("The date %d/%d/%d is not valid.", day, month, year);
    }

    return 0;
}