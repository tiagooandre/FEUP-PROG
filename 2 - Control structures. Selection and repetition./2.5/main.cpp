#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, funcpos, funcneg, res;

    cout << "a, b and c: " << endl;
    cin >> a >> b >> c;

    funcpos = (- b + sqrt(pow(b,2) - 4 * a * c))/(2 * a);
    funcneg = (- b - sqrt(pow(b,2) - 4 * a * c))/(2 * a);

    if (funcpos == funcneg) {
        cout << "2 Equal Real Roots." << endl;
    } else if (pow(b, 2) - 4 * a * c < 0) {
        res = abs(pow(b, 2) - 4 * a * c);
        cout << "The equation has 2 complex equations roots: -" << b << " + " << res << "i "<< " and -" << b << " - " << res << "i " << endl;
    } else if (funcpos != funcneg) {
        cout << "2 Different Real Equations." << endl;
    }
}
