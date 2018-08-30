// Write a program that asks for five test scores. The program should calculate
// the average test score and display it. The number displayed should be
// formatted in fixed-point notation, with one decimal point of precision.

#include <iostream>
using namespace std;

int main() {
    // Variables
    int score1, score2, score3, score4, score5;

    // fixed-point notation
    cout.precision(1);

    // User Input Prompts
    cout << "Enter the score for test 1: ";
    cin >> score1;
    cout << endl;

    cout << "Enter the score for test 2: ";
    cin >> score2;
    cout << endl;

    cout << "Enter the score for test 3: ";
    cin >> score3;
    cout << endl;

    cout << "Enter the score for test 4: ";
    cin >> score4;
    cout << endl;

    cout << "Enter the score for test 5: ";
    cin >> score5;
    cout << endl;

    // Average Test Score
    cout << (score1 + score2 + score3 + score4 + score5) / 5;

    return 0;
}