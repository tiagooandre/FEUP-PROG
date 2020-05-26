#include <iostream>
#include <vector>

using namespace std;

vector<int> readVector(vector <int> &v) {
    int i = 0;
    int a;
    cout << i << ": ";
    while(cin >> a) {
        v.push_back(a);
        i++;
        cout << i << ": ";
    }
    return v;
}

size_t findValueInVector(const vector<int> &v, int value, size_t pos1, size_t pos2){
    for (int i = pos1; i < pos2; i++){
        if (v.at(i) == value) {
            return i;
        }
    }
    return -1;
}

size_t findMultValuesInVector(const vector<int> &v, int value, size_t pos1, size_t pos2, vector<size_t> &index) {
    int sum = 0;
    for (int i = pos1; i < pos2; i++) {
        if (v.at(i) == value) {
            index.push_back(i);
            sum++;
        }
    }
    return sum;
}

int main() {
    vector<int> v;
    vector <size_t> i;
    readVector(v);
    for (int i : v){
        cout << i << '\t';
    }
    cout << findValueInVector(v, 10, 0, 4) << endl;
    cout <<findMultValuesInVector(v, 10, 0, 3, i) << endl;
}