#include <iostream>
using namespace std;

void calculateSalary(int start_time, int end_time){
    int salary = 0;
    if (start_time < 6 || end_time > 18 || end_time < start_time){
        cout << "Invalid time period" << endl;
        if (start_time < 6){
            cout << "Start time earlier than 6" << endl;
        }
        if (end_time > 18){
            cout << "End time later than 18" << endl;
        }
        if (end_time < start_time){
            cout << "Start time later than end time" << endl;
        }
        return;
    }
    if (end_time < 12){
        salary = (end_time - start_time) * 6000;
    }else if (start_time > 12){
        salary = (end_time - start_time) * 7500;
    }else{
        salary = (end_time - 12) * 7500 + (12 - start_time) * 6000;
    }

    cout << "Total salary is: " << salary << endl;
}


int main() {
	int start_time, end_time;

    cout << "Please enter your start and end time: ";
    cin >> start_time; cin >> end_time;

    calculateSalary(start_time, end_time);

	return 0;
}