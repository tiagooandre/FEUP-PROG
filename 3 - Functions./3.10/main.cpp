#include <iostream>

using namespace std;

unsigned long long factorial_ite(unsigned int n) { //Iterações
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long factorial_rec(unsigned int n) { //Recursivo
    unsigned long long;
    if (n == 1) {
        return 1;
    } else {
        return n * factorial_ite(n - 1);
    }
}

int main() {
    int n;
    cout << "Insert number: " << endl;
    cin >> n;

    cout << "Factorial_ite: " << factorial_ite(n) << endl;
    cout << "Factorial_rec: " << factorial_rec(n) << endl;
}
