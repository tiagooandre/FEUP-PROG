#include <iostream>

using namespace std;

//a[] - array de inteiros
void readArray(int a[], size_t nElem) {
    for (int i = 0; i < nElem; i++) {
        int temp;
        cout << "Element: " << i << endl;
        cin >> temp;
        a[i] = temp;
    }
}

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1 = 0, size_t pos2 = -1) {
    for (int i = pos1; i <= pos2; i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]){
    int sum = 0;
    for (int i = pos1; i<nElem && i< pos2; i++){
        if (a[i] == value){
            index[sum] = i;
            sum ++;
        }
    }
    return sum;
}

int main() {
    int arr[4];
    size_t i[4];
    readArray(arr, 4);
    cout << findValueInArray(arr, 4, 20) << endl;
    cout<<findMultValuesInArray(arr, 4, 10, 0, 4, i) << endl;
}
