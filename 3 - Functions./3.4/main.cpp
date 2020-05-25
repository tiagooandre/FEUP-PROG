#include <iostream>
#include <cmath>

using namespace std;

double round(double x, unsigned n) {
    double res = floor(x * pow(10, n) + 0.5) / pow(10, n);

    return res;
}

int main() {
    double x;
    unsigned n;

    cout << "Number to be rounded: " << endl;
    cin >> x;
    cout << "Number of decimal places: " << endl;
    cin >> n;

    cout << "The result is: round(" << x << ", " << n << ") = " << round(x,n) << endl;

    return 0;
}
