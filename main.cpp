#include <iostream>
using namespace std;

// Homework 5 - Noe Zuniga
// CIS 5 Week 05 - Rule engine lite

int main() {
    int score = 0;
    int attendance = 0;

    cout << "Score 0-100? ";
    cin >> score;

    cout << "Attendance percent? ";
    cin >> attendance;

    // Edge values: score 69, 70, 71; attendance 74, 75, 76

    // Invalid comes first so bad inputs do not go through the other rules.
    if (score < 0 || score > 100 || attendance < 0 || attendance > 100) {
        cout << "Result: invalid input" << endl;
    }
    // Both requirements must be met to pass, so && is used.
    else if (score >= 70 && attendance >= 75) {
        cout << "Result: pass" << endl;
    }
    else if (score >= 70 || attendance >= 75) {
        cout << "Result: warn" << endl;
    }
    else {
        cout << "Result: fail" << endl;
    }

    return 0;
}

