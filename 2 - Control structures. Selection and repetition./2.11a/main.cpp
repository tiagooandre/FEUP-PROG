#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, a = 0;
    double pi = 0;
    cout << "N terms: " << endl;
    cin >> n;

    for (int i = 1; i < n; i+=2) {
        pi += (4 / i) * pow(-1, a); //Para fazer o negativo e o positivo
        a++;
    }

    cout << pi << endl;
}
