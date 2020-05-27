#include <iostream>

using namespace std;

bool sequenceSearch(const string &s, int nc, char c) {
    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        int temp = i;
        while (temp < s.size() && s[temp] == c) { //Enquanto o vetor não acabar e for igual ao char
            count++; //Faz a contagem
            temp++; //Aumenta para ir ao próximo
        }
        if (count == nc) { //Se a contagem for igual ao char então true
            return true;
        }
    }
    return false;
}

int main() {
    cout << sequenceSearch("abbcddeedddf", 3, 'b');
}
