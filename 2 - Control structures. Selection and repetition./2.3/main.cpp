#include <iostream>

using namespace std;

int main() {
    int num1, num2, sum;

    cout << "Num1: " << endl;
    cin >> num1;
    cout << "Num2: " << endl;
    cin >> num2;

    sum = num1 + num2;

    if (sum > INT_MAX) { //Está a dar erro and idk why
        cout << "sum overflow" << endl;
    } else if (sum < INT_MIN) {
        cout << "sum underflow" << endl;
    } else {
        cout << "Sum = " << sum << endl;
    }

    return 0;
}
