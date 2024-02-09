#include <iostream>
using namespace std;

int main() {
    int score[3], i, counter = 0, totalScore = 0;
    float averageScore;

    for(i = 0; i < 3; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> score[i];
        totalScore += score[i];
    }

    averageScore = (float) totalScore / 3;

    for(i = 0; i < 3; i++) {
        if(score[i] > averageScore) {
            counter++;
        }
    }

    cout << "\nAverage score: " << averageScore;
    cout << "\nNumber of students with scores above average: " << counter << "\n";

    return 0;
}
