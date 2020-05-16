#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double M, ro, r, pi;
    pi = 3.1415;

    cout << "What is the value of ro (Kg/m^3)? " << endl;
    cin >> ro;
    cout << "What is the value of r (m)? " << endl;
    cin >> r;

    M = (4 / double(3)) * (ro * pi * pow(r, 3));

    cout << "M = " << M << endl;

    return 0;
}
