#include <iostream>

using namespace std;

int GCD(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return GCD(n, m % n);
    }
}

int main() {
    int m, n, res;

    cout << "Enter the first number: " << endl;
    cin >> m;
    cout << "Enter the second number: " << endl;
    cin >> n;

    cout << "The Greatest Common Divisor is: " << GCD(m, n) << endl;
}
