#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double area, s, a, b, c, x1, y1, x2, y2, x3, y3;

    cout << "Coord. 1: " << endl;
    cin >> x1 >> y1;
    cout << "Coord. 2: " << endl;
    cin >> x2 >> y2;
    cout << "Coord. 3: " << endl;
    cin >> x3 >> y3;

    a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Triangle area = " << area << endl;

    return 0;
}
