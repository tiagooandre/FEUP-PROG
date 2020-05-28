#include <iostream>
#include <cmath>

using namespace std;

double factorial(int n) {
    int fact = 1.0;
    for (int j = 1; j <= n; j++) {
        fact *= j;
    }
    return fact;
}

int main() {
    int n;
    double sum = 0;

    cout << "N terms: " << endl;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += (1 / factorial(i));
    }
    cout << sum << endl;
}
