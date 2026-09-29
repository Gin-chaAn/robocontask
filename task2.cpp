#include <iostream>
using namespace std;

int main() {
    int number;
    int count[10] = {0};

    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        count[0] = 1;
    }

    while (number > 0) {
        int digit = number % 10;

        count[digit]++;

        number = number / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            cout << i << " appears " << count[i] << " times" << endl;
        }
    }

    return 0;
}