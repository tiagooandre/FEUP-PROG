#include <iostream>

using namespace std;

int main() {
    int len;
    cout << "Number length: " << endl;
    cin >> len;
    double n, sum = 0, mean = 0, max = 0, min = 99999;

    for (int i = 0; i < len; i++) {
        cout << "Insert value: " << i << endl;
        cin >> n;
        sum += n;
        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
    }
    mean = sum / len;

    cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}
