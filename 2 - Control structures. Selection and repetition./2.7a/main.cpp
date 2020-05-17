#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Number: " << endl;
    cin >> num;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime == false) {
        cout << "It's not a prime number." << endl;
    } else {
        cout << "It's a prime number." << endl;
    }
    return 0;
}