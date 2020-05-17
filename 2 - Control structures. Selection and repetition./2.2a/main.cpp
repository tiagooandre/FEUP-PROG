#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "1st number: " << endl;
    cin >> num1;
    cout << "2nd number: " << endl;
    cin >> num2;
    cout << "3rd number: " << endl;
    cin >> num3;

    if (num1 > num2 and num1 > num3) {
        if (num2 > num3) {
            cout << "Largest: " << num1 << endl;
            cout << "Smallest: " << num3 << endl;
        }
        else {
            cout << "Largest: " << num1 << endl;
            cout << "Smallest: " << num2 << endl;
        }
    } else if (num2 > num1 and num2 > num3) {
        if (num1 > num3) {
            cout << "Largest: " << num2 << endl;
            cout << "Smallest: " << num3 << endl;
        } else {
            cout << "Largest: " << num2 << endl;
            cout << "Smallest: " << num1 << endl;
        }
    } else if (num3 > num1 and num3 > num2) {
        if (num1 > num2) {
            cout << "Largest: " << num3 << endl;
            cout << "Smallest: " << num2 << endl;
        } else {
            cout << "Largest: " << num3 << endl;
            cout << "Smallest: " << num1 << endl;
        }
    }
}
