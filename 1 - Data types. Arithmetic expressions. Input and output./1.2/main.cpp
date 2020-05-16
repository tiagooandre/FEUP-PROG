#include <iostream>

using namespace std;

int main() {
    double a, b, c, mean, amean, bmean, cmean;
    cout << "Please, input 3 integer numbers" << endl;
    cout << "A? " << endl;
    cin >> a;
    cout << "B? " << endl;
    cin >> b;
    cout << "C? " << endl;
    cin >> c;

    mean = (a + b + c) / 3;
    amean = a - mean;
    bmean = b - mean;
    cmean = c - mean;

    cout << "Mean = " << mean << endl;
    cout << "A-Mean = " << amean << endl;
    cout << "B-Mean = " << bmean << endl;
    cout << "C-Mean = " << cmean << endl;

    return 0;
}
