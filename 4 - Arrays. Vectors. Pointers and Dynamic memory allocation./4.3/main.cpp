#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v) {
    int vec_size = v.size();
    while (vec_size > 0) {
        for (int i = 1; i < vec_size; i++) {
            if (v.at(i - 1) > v.at(i)) {
                int temp = v.at(i);
                v.at(i) = v.at(i - 1);
                v.at(i - 1) = temp;
            }
        }
        vec_size--;
    }
}

void readVector(std::vector<int> &v) {
    int temp;
    int i = 0;
    cout << "Insert value at index " << i << ": ";
    while (cin >> temp) {
        i++;
        cout << "Insert value at index " << i << ": ";
        v.push_back(temp);
    }
    std::cout << '\n';
}

void testA() {
    std::vector<int> vec;
    readVector(vec);
    bubbleSort(vec);
    for (int i : vec) {
        cout << vec.at(i) << '\t';
    }
}

void bubbleSortMod1(std::vector<int> &v) {
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

void testC() {
    std::vector<int> vec;
    readVector(vec);
    bubbleSortMod1(vec);
    for (int i : vec) {
        std::cout << i << '\t';
    }
    std::cout << '\n';
}

void bubbleSortMod2(std::vector<int> &v, char order) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 1; i < v.size(); i++) {
            if (v.at(i - 1) > v.at(i) && order == 'a' || v.at(i - 1) < v.at(i) && order == 'd') {
                int temp = v.at(i);
                v.at(i) = v.at(i - 1);
                v.at(i - 1) = temp;
                swapped = true;
            }
        }
    }
}

void testD() {
    char order;
    std::vector<int> vec;
    std::cout << "Order: "; std::cin >> order;
    readVector(vec);
    bubbleSortMod2(vec, order);
    for (int i : vec) {
        std::cout << i << '\t';
    }
    std::cout << '\n';
}

bool ascending(int x, int y) {
    return x > y;
}

bool descending(int x, int y) {
    return x < y;
}

void bubbleSortMod3(std::vector<int> &v, bool f(int x, int y)) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 1; i < v.size(); i++) {
            if (f(v.at(i-1), v.at(i))) {
                int temp = v.at(i);
                v.at(i) = v.at(i-1);
                v.at(i-1) = temp;
                swapped = true;
            }
        }
    }
}

void testE() {
    std::vector<int> vec = {2, 6, 7, 2, 8, 2, 1, 0 -5};
    bubbleSortMod3(vec, ascending);
    for (int i : vec) {
        std::cout << i << '\t';
    }
    std::cout << std::endl;
    bubbleSortMod3(vec, descending);
    for (int i : vec) {
        std::cout << i << '\t';
    }
    std::cout << '\n';
}

int main() {
    // testA();
    // testC();
    // testD();
    testE();
}
