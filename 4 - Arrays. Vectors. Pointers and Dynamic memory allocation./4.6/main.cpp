#include <iostream>
#include <vector>

using namespace std;

void removeDuplicates(vector<int> &v) {
    for (int i = 0; i < v.size(); i ++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v.at(i) == v.at(j)) {
                for (int k = j + 1; k < v.size(); k ++) {
                    v.at(k - 1) = v.at(k);
                }
                v.resize(v.size() - 1);
                j --;
            }
        }
    }
}

void bubbleSort(vector<int> &v) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 1; i < v.size(); i++) {
            if (v.at(i - 1) > v.at(i)) {
                int temp = v.at(i);
                v.at(i) = v.at(i - 1);
                v.at(i - 1) = temp;
                swapped = true;
            }
        }
    }
}

void vectorUnion(const vector<int> &v1, const vector<int> &v2, vector<int> &v3) {
    for (int i : v1) {
        v3.push_back(i);
    }
    for (int i : v2) {
        v3.push_back(i);
    }
    removeDuplicates(v3);
    bubbleSort(v3);
}

void vectorIntersection(const vector<int> &v1, const vector<int> &v2, vector<int> &v3) {
    for (int i : v1) {
        for (int j : v2) {
            if (i == j) {
                v3.push_back(i);
            }
        }
    }
    removeDuplicates(v3);
    bubbleSort(v3);
}

int main() {
    vector<int> v1 = {20, 1, 5, 10, 10, 50, 10};
    vector<int> v2 = {50, 20, 3, 15, 50};
    vector<int> v3 = {};
    cout << "Vector Union" << endl;
    vectorUnion(v1, v2, v3);
    for (int i : v3) {
        cout << i << endl;
    }
    v3 = {};
    cout << "Vector Intersection" << endl;
    vectorIntersection(v1, v2, v3);
    for (int i : v3) {
        cout << i << endl;
    }
}
