#include <iostream>

using namespace std;

int main() {
    double x, y;
    double a, b, c, d, e, f;

    cout << "a?" << endl;
    cin >> a;
    cout << "b?" << endl;
    cin >> b;
    cout << "c?" << endl;
    cin >> c;
    cout << "d?" << endl;
    cin >> d;
    cout << "e?" << endl;
    cin >> e;
    cout << "f?" << endl;
    cin >> f;

    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    cout << "x = (c * e - b * f) / (a * e - b * d) = " << x << endl;
    cout << "y = (a * f - c * d) / (a * e - b * d) = " << y << endl;
}
