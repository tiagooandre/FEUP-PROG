#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    cout << "Number: " << endl;
    cin >> num;

    if (isPrime(num) == false) {
        cout << "It's not a prime number." << endl;
    } else {
        cout << "It's a prime number." << endl;
    }

    return 0;
}