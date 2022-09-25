#include <iostream>
using namespace std;

void SplitBanknotes(int amount){
    int remainder = amount;
    int note_total = 0;

    int note_500 = remainder / 500;
    if (note_500 > 0){
        cout << note_500 << " Note(s) of 500" << endl;
        remainder -= (500 * note_500);
        note_total += note_500;
    }
    int note_200 = remainder / 200;
    if (note_200 > 0){
        cout << note_200 << " Note(s) of 200" << endl;
        remainder -= (200 * note_200);
        note_total += note_200;
    }
    int note_100 = remainder / 100;
    if (note_100 > 0){
        cout << note_100 << " Note(s) of 100" << endl;
        remainder -= (100 * note_100);
        note_total += note_100;
    }
    int note_50 = remainder / 50;
    if (note_50 > 0){
        cout << note_50 << " Note(s) of 50" << endl;
        remainder -= (50 * note_50);
        note_total += note_50;
    }
    int note_20 = remainder / 20;
    if (note_20 > 0){
        cout << note_20 << " Note(s) of 20" << endl;
        remainder -= (20 * note_20);
        note_total += note_20;
    }
    int note_10 = remainder / 10;
    if (note_10 > 0){
        cout << note_10 << " Note(s) of 10" << endl;
        remainder -= (10 * note_10);
        note_total += note_10;
    }
    int note_5 = remainder / 5;
    if (note_5 > 0){
        cout << note_5 << " Note(s) of 5" << endl;
        remainder -= (5 * note_5);
        note_total += note_5;
    }
    int note_2 = remainder / 2;
    if (note_2 > 0){
        cout << note_2 << " Note(s) of 2" << endl;
        remainder -= (2 * note_2);
        note_total += note_2;
    }
    int note_1 = remainder / 1;
    if (note_1 > 0){
        cout << note_1 << " Note(s) of 1" << endl;
        remainder -= (1 * note_1);
        note_total += note_1;
    }
    cout << "The total of banknotes: " << note_total << endl;
}

int main() {
    int amount;

    cout << "The amount: ";
    cin >> amount;
    SplitBanknotes(amount);

    return 0;
}