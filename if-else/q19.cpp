#include <iostream>
#include <cmath>
using namespace std;

bool checkTime(int hour, int minute, int second) {
	if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59 && second >= 0 && second <= 59)
	{
		return true;
	}
	return false;
}

void AddTime(int hourOne, int minuteOne, int secondOne, int hourTwo, int minuteTwo, int secondTwo) {
	int hourSum, minuteSum, secondSum;

	secondSum = secondOne + secondTwo;
	minuteSum = minuteOne + minuteTwo;
	hourSum = hourOne + hourTwo;

	if (secondSum >= 60) {
		secondSum -= 60;
		minuteSum += 1;
	}

	if (minuteSum >= 60) {
		minuteSum -= 60;
		hourSum += 1;
	}

	printf("\n the hour one: %d:%d:%d", hourOne, minuteOne, secondOne);
	printf("\n the hour two: %d:%d:%d", hourTwo, minuteTwo, secondTwo);
	printf("\n the two hours total are %d:%d:%d", hourSum, minuteSum, secondSum);
}

int main() {
	int hourOne, minuteOne, secondOne;
	int hourTwo, minuteTwo, secondTwo;

	cout << "Input three numbers of the first time (hour, minute, second): ";
	cin >> hourOne >> minuteOne >> secondOne;

	cout << "Input three numbers of the second time (hour, minute, second): ";
	cin >> hourTwo >> minuteTwo >> secondTwo;

	if (checkTime(hourOne, minuteOne, secondOne) && checkTime(hourTwo, minuteTwo, secondTwo)) {
		AddTime(hourOne, minuteOne, secondOne, hourTwo, minuteTwo, secondTwo);
	}

	return 0;
}