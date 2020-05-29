#include <iostream>
#include <math.h>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double area(double radius) { //círculo
    return M_PI * pow(radius, 2);
}

double area(double x1, double y1, double x2, double y2, double x3, double y3) { //triângulo
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x1, y1, x3, y3);
    double s = (a + b + c) / 3;

    return sqrt((s)*(s-a)*(s-b)*(s-c));
}

double area(double x1, double y1, double x2, double y2) { //retângulo
    double altura = abs(y1 - y2);
    double largura = abs(x1 - x2);

    return altura * largura;
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Insert radius, coordinates of 3 vertices or coordinates of 2 opposite vertices" << endl;
    cin >> x1;
    cout << area(x1);
    cin >> x1 >> y1 >> x2 >> y2;
    cout << area(x1, y1, x2, y2);
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << area(x1, y1, x2, y2, x3, y3);
}
