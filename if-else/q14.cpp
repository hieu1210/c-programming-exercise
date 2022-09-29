#include <iostream>
using namespace std;

void calculateGPA(int score_math, int score_phys, int score_chem){
    float GPA = (score_math * 3 + score_phys * 2 + score_chem) / 6.0;
    
    if (GPA >= 9.0){
        cout << "Excellent" << endl;
    }
    else if (GPA >= 8.0){
        cout << "Very Good" << endl;
    }
    else if (GPA >= 7.0){
        cout << "Good" << endl;
    }
    else if (GPA >= 6.0){
        cout << "Fairly Good" << endl;
    }
    else if (GPA >= 5.0){
        cout << "Average" << endl;
    }
    else{
        cout << "Weak" << endl;
    }
}


int main() {
	int score_math, score_phys, score_chem;

    cout << "Please enter your Math, Physics and Chemistry scores: ";
    cin >> score_math; cin >> score_phys; cin >> score_chem;

    calculateGPA(score_math, score_phys, score_chem);

	return 0;
}