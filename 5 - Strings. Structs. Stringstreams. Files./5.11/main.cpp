#include <iostream>
#include <vector>
#include <fstream>
#include <iostream>

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

void readFile(vector<string> &v, string &file) {
    string line; //Cada linha do ficheiro
    ifstream f; //Para abrir o ficheiro

    f.open(file); //Abre ficheiro

    if (f.is_open()) { //Verificar se está aberto
        while (getline(f, line)) { //Enquanto está aberto ...
            v.push_back(line); //Puxa cada linha para o vetor
        }
        f.close(); //Fecha o ficheiro
    }
    else {
        cout << "Impossible open the file." << endl;
    }
}

void writeFile(vector<string> &v) {
    string file_name = "New_names.txt";
    ofstream f(file_name);

    for (int i = 0; i < v.size(); i++) {
        f << v[i] << endl;
    }
}

int main() {
    vector<string> v;
    string name = "/Users/tiagoandre/Desktop/names.txt";

    readFile(v, name); //Importante passar os parâmetros por referência

    for (auto i : v) {
        cout << i << endl;
    }

    bubbleSort(v, 'a');
    writeFile(v); //Ficheiro é criado no cmake-build-debug na pasta 5.11 do exercício
}