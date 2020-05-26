#include <iostream>

using namespace std;

int main() {
    int values[] = { 2, 3, 5, 7, 11, 13 };
    int *p = values + 1;

    cout << values[1] << endl; //1ª posição de values[] = 3
    cout << values+1 << endl; //É o endereço do valor da posição 1, ou seja, é o endereço do 3;
    cout << *p << endl; //É o valor armazenado nos 4 bytes depois do endereço base de values[];
    cout << *(values+3) << endl; cout << p+1 << endl; //É o valor armazenado nos 12 bytes depois do endereço base de values[];
    cout << p[1] << endl; //É o valor armazenado 4 bytes depois do valor do endereço dado em p+1, que neste caso será 5;
    cout << p-values << endl; //É o valor da posição do valor armazenado 4 bytes depois do endereço base;
}
