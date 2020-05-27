#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

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

void compressImage() {

}

int main() {
    vector<string> v;
    string name = "/Users/tiagoandre/Desktop/names.txt";

    readFile(v, name); //Importante passar os parâmetros por referência

    for (auto i : v) {
        cout << i << endl;
    }

//    bubbleSort(v, 'a');
    writeFile(v); //Ficheiro é criado no cmake-build-debug na pasta 5.11 do exercício
}