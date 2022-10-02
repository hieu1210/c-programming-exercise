#include <iostream>
#include <cmath>
using namespace std;

bool checkTime(int hour, int minute, int second){
    if ((hour < 0) | (hour >= 24) | (minute < 0) | (minute >= 60) | (second < 0) | (second >= 60)){
        return false;
    }else{
        return true;
    }
}

void PreviousTime(int hour, int minute, int second){
    second -= 1;

    if (second < 0){
        second = 59;
        minute -= 1;
        if (minute < 0){
            minute = 59;
            hour -= 1;
        }
    }
    printf("\nThe previous second is %d:%d:%d.", hour, minute, second);
}

void NextTime(int hour, int minute, int second){
    second += 1;

    if (second = 60){
        second = 0;
        minute += 1;
        if (minute = 60){
            minute = 0;
            hour += 1;
        }
    }
    printf("\nThe next second is %d:%d:%d.", hour, minute, second);
}

int main() {
	int hour, minute, second;

    cout << "Input three numbers (hour, minute, second): ";
    cin >> hour >> minute >> second;

    if (checkTime(hour, minute, second)){
        printf("The time %d:%d:%d is valid.", hour, minute, second);
        PreviousTime(hour, minute, second);
        NextTime(hour, minute, second);
    }else{
        printf("The time %d:%d:%d is not valid.", hour, minute, second);
    }

	return 0;
}