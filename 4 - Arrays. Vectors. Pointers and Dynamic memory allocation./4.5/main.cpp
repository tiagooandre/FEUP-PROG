#include <iostream>
#include <vector>

using namespace std;

void removeDuplicates(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v.at(i) == v.at(j)) {
                for (int k = j + 1; k < v.size(); k++) {
                    v.at(k - 1) = v.at(k); //A posição anterior fica com o valor à frente para poder diminuir o vec com o resize()
                }
                v.resize(v.size() - 1);
                j--;
            }
        }
    }
}

int main() {
    vector<int> v = {20, 1, 5, 10, 10, 50, 10};
    removeDuplicates(v);
    for (int i : v) {
        cout << i << endl;
    }
}