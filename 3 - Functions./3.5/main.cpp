#include <iostream>

using namespace std;

int GCD(int x, int y) {
    if (x == y) {
        return x;
    } else if (x == 0 || y == 0) {
        if (x == 0) {
            return y;
        } else {
            return x;
        }
    } else if (x != y) {
        while ((x % y) > 0)  {
            int aux = x % y;
            x = y;
            y = aux;
        }
        return y;
    }
    return x;
}

int main() {
    int x, y;

    cout << "1st number: " << endl;
    cin >> x;
    cout << "2nd number: " << endl;
    cin >> y;

    cout << "GCD = " << GCD(x, y) << endl;

    return 0;
}
