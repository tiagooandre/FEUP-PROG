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

    if (num1 < 0 or num2 < 0 or num3 < 0) {
        cout << "Error. Negative value." << endl;
    } else {
        if (num1 > num2 and num1 > num3) {
            if (num2 > num3) {
                if (num2 + num3 > num1) {
                    cout << "It's not possible to create a triangle." << endl;
                } else {
                    cout << "It's possible to create a triangle." << endl;
                }
            }
            else {
                if (num2 + num3 > num1) {
                    cout << "It's not possible to create a triangle." << endl;
                } else {
                    cout << "It's possible to create a triangle." << endl;
                }
            }
        } else if (num2 > num1 and num2 > num3) {
            if (num1 > num3) {
                if (num1 + num3 > num2) {
                    cout << "It's not possible to create a triangle." << endl;
                } else {
                    cout << "It's possible to create a triangle." << endl;
                }
            } else {
                if (num1 + num3 > num2) {
                    cout << "It's not possible to create a triangle." << endl;
                } else {
                    cout << "It's possible to create a triangle." << endl;
                }
            }
        } else if (num3 > num1 and num3 > num2) {
            if (num1 > num2) {
                if (num2 + num1 > num3) {
                    cout << "It's not possible to create a triangle." << endl;
                } else {
                    cout << "It's possible to create a triangle." << endl;
                }
            } else {
                if (num2 + num1 > num3) {
                    cout << "It's not possible to create a triangle." << endl;
                } else {
                    cout << "It's possible to create a triangle." << endl;
                }
            }
        }
    }
}

