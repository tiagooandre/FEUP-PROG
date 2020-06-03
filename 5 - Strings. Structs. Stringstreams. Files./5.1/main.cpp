#include <iostream>

using namespace std;

char encryptChar(char c, int key) {
    if (isalpha(c)) {
        char res = (c + key);
        if (isupper(c)) {
            while (res < 'A') {
                res += 26;
            }
            while (res > 'Z') {
                res -= 26;
            }
        } else {
            while (res < 'a') {
                res += 26;
            }
            while (res > 'z') {
                res -= 26;
            }
        }
        c = res;
    }
    return c;
}

string encryptString(string &s, int key) {
    string res;

    for (auto i : s) {
        res += encryptChar(i, key);
    }

    return res;
}



int main() {
    // a)
    cout  << encryptChar('d', -3) << endl;
    cout  << encryptChar('r', 3) << endl;
    cout  << encryptChar('A', 5) << endl;

    // b, c)
    string str;
    int key;
    std::cout << "Insert string: "; getline(std::cin, str);
    std::cout << "Insert key: "; std::cin >> key;
    std::cout << encryptString(str, key);

    // d)
    //Em C a char não pode ser declarado como "char c" mas sim como "char c[]"
}
