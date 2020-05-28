#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double rq = 1.0, rqn, n, rqnsquare, diff, delta, nMaxIter;

    cout << "Number for square root: " << endl;
    cin >> n;

    cout << "Number for delta: ";
    cin >> delta;

    cout << "Number of Iterations: " << endl;
    cin >> nMaxIter;

    cout << "rq" << setw(20) << "rqn" << setw(20) << "rqn^2" << setw(20) << "diff" << "\n";

    for (int i = 0; i < nMaxIter; i++) {
        rqn = (rq + n / rq) / 2;
        rqnsquare = pow(rqn, 2);
        diff = n - rqnsquare;

        cout << fixed;
        cout << setprecision(6);
        cout << rq << setw(20) << rqn << setw(20) << rqnsquare << setw(20) << diff << "\n";
        rq = rqn;
    }



//    cout << fixed;
//    cout << setprecision(10) << rqn << endl;

}
