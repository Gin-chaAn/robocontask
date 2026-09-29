#include <iostream>
using namespace std;

int main() {
    float readings[10];
    float maximum, minimum, sum = 0, average;
    int below20 = 0;
    int above100 = 0;

    cout << "Enter 10 distance readings (in cm):" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> readings[i];
    }

    maximum = readings[0];
    minimum = readings[0];

    for (int i = 0; i < 10; i++) {

        
        if (readings[i] > maximum) {
            maximum = readings[i];
        }

        if (readings[i] < minimum) {
            minimum = readings[i];
        }

        sum = sum + readings[i];

        if (readings[i] < 20) {
            below20++;
        }

        if (readings[i] > 100) {
            above100++;
        }
    }

    
    average = sum / 10;

    cout << "\nMaximum reading: " << maximum << endl;
    cout << "Minimum reading: " << minimum << endl;
    cout << "Average reading: " << average << endl;
    cout << "Readings below 20 cm: " << below20 << endl;
    cout << "Readings above 100 cm: " << above100 << endl;

    return 0;
}