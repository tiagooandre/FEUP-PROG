#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Insert number: " << endl;
    cin >> number;

    for (int i = 2; number != 1; i++) {
        while (number % i == 0) {
            number /= i;
            cout << i << " ";
        }
    }
}
