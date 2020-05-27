#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<string> &v, char order) {
    string first, second;
    for (int i = 0; i < v.size(); i++) { //número de vezes que vamos iterar dentro do vetor
        for (int j = 0; j < v.size() - 1 - i; j++) {
            first = v[j];
            second = v[j + 1];
            if (first > second) { //para ordem ascendente
                if (order == 'a') {
                    v[j] = second;
                    v[j + 1] = first;
                }
            }
            else  //para ordem decrescente se first < second já é essa a ordem que queremos por isso mantemos :D
            {
                if (order == 'd') {
                    v[j] = second;
                    v[j + 1] = first;
                }
            }
        }
    }
}

int main() {
    int num;
    vector<string> v;
    string name;
    cout << "How many names? " << endl;
    cin >> num;

    cin.ignore(); //Esta linha limpa os caracteres para que o getline() funcione sem saltar a 1ª vez
    for (int i = 0; i < num; i++) {
        cout << "Enter the name: ";
        getline(cin, name, '\n');
        v.push_back(name);
    }

    bubbleSort(v, 'a');

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}
