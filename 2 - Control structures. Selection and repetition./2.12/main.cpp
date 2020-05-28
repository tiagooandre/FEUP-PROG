#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double sum = 0, prec, i = 0;
    cout << "precision: "; cin >> prec;
    cout << setprecision(10);
    while (abs(sum - M_PI) >= prec) {
        sum += (4 / (2*i + 1)) * pow(-1, i);
        i++;
    }
    cout << sum << endl;
}
