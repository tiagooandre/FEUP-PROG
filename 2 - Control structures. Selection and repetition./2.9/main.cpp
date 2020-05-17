#include <iostream>

using namespace std;

int main() { //a)
    int num;

    cout << "Number with 3 digits: " << endl;
    cin >> num;

    if (num / 100 == num % 10) {
        cout << "It's a palindrome." << endl;
    } else {
        cout << "It's not a palindrome." << endl;
    }

    return 0;
}