#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &v, int value) {
    int first = v[0]; //1º elemento
    int last = v[v.size() - 1]; //último elemento
    bool found = false;

    while (found == false) {
        int middle = v.size() / 2;
        if (v[middle] == value) {
            cout << "Found!" << endl;
            return middle;
        } else if (v[middle] > value) {
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> v = {1, 3, 5, 8, 9, 23, 34, 41};
    int value;

    cout << "Insert the value: " << endl;
    cin >> value;

    cout << binarySearch(v, value);

    return 0;
}
