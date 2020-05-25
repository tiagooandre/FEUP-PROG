#include <iostream>

using namespace std;

bool readFraction(int &numerator, int &denominator) {
    char del;
    if (cin >> numerator >> del >> denominator and del == '/') {
        return 1;
    } else {
        numerator = 0;
        denominator = 0;
        return 0;
    }
}

double gcd(int numerator, int denominator) {
    while ((numerator % denominator) > 0)  {
        int aux = numerator % denominator;
        numerator = denominator;
        denominator = aux;
    }
    return denominator;
}

void reduceFraction(int &numerator, int &denominator) {
    int gcd_num = gcd(numerator, denominator);
    numerator /= gcd_num;
    denominator /= gcd_num;
}

void addFractions(int &numerator1, int &denominator1, int numerator2, int denominator2) {
    if (denominator1 == denominator2) {
        numerator1 = numerator1 + numerator2;
    } else {
        numerator1 = denominator2 * numerator1 + denominator1 * numerator2;
        denominator1 = denominator1 * denominator2;
    }
}

//Cansei-me de fazer, o resto é copiado: https://github.com/eukia/FEUP-PROG/blob/master/3.%20Functions/ex3-8.cpp
void subtractFractions(int &numerator1, int &denominator1, int numerator2, int denominator2) {
    if (denominator1 == denominator2) {
        numerator1 = numerator1 - numerator2;
    }
    else {
        numerator1 = denominator2 * numerator1 - denominator1 * numerator2;
        denominator1 = denominator1 * denominator2;
    }
    reduceFraction(numerator1, denominator1);
}

void multiplyFractions(int &numerator1, int &denominator1, int numerator2, int denominator2) {
    numerator1 *= numerator2;
    denominator1 *= denominator2;
    reduceFraction(numerator1, denominator1);
}

void divideFractions(int &numerator1, int &denominator1, int numerator2, int denominator2) {
    numerator1 *= denominator2;
    denominator1 *= numerator2;
    reduceFraction(numerator1, denominator1);
}

int main() {
    int numerator, denominator;
    int numerator2, denominator2;
    int op;
    cout << "insert 1st fraction in form a/b: " << endl;
    readFraction(numerator, denominator);
    cout << "reduced: ";
    reduceFraction(numerator, denominator);
    cout << numerator << "/" << denominator << endl;

    cout << "insert 2nd fraction in form a/b: " << endl;
    readFraction(numerator2, denominator2);
    cout << "reduced: ";
    reduceFraction(numerator2, denominator2);
    cout << numerator2 << "/" << denominator2 << endl;

    cout << "Select operation: (1) - add, (2) - sub, (3) - mul, (4) - div: ";
    cin >> op;
    switch (op) {
        case 1:
            addFractions(numerator, denominator, numerator2, denominator2);
            cout << numerator << "/" << denominator << endl;
            break;
        case 2:
            subtractFractions(numerator, denominator, numerator2, denominator2);
            cout << numerator << "/" << denominator << endl;
            break;
        case 3:
            multiplyFractions(numerator, denominator, numerator2, denominator2);
            cout << numerator << "/" << denominator << endl;
            break;
        case 4:
            divideFractions(numerator, denominator, numerator2, denominator2);
            cout << numerator << "/" << denominator << endl;
            break;
        default:
            cerr << "Invalid." << endl;
            break;
    }
}
