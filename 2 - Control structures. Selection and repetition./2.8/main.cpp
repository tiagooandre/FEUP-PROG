#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << "ang" << setw(10) << "sin" << setw(10) << "cos" << setw(10) << "tan" << endl;
    for (int i = 0; i <= 90; i += 15) {
        if (i == 90) {
            cout << setw(5) << i << setw(10) << sin(i * M_PI / 180.0) << setw(10) << cos(i * M_PI / 180.0) << setw(10) << "infinite" << endl;
        } else {
            cout << setw(5) << i << setw(10) << sin(i * M_PI / 180.0) << setw(10) << cos(i * M_PI / 180.0) << setw(10) << tan(i * M_PI / 180.0) << endl;
        }
    }
}