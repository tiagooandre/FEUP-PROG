#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n1, n2, res = 0, correct_res, asking_time, answear_time, timecount;
    srand(time(NULL));

    n1 = rand() % 10;
    n2 = rand() % 10;

    asking_time = time(NULL);
    cout << "Multiplication test: " << endl;
    cout << "How much is " << n1 << " x " << n2 << " ?" << endl;
    cin >> res;
    answear_time = time(NULL);

    correct_res = n1 * n2;

    timecount = asking_time - answear_time;

    if (res != correct_res) {
        cout << "Very bad!" << endl;
    } else if (timecount < 5 && res == correct_res) {
        cout << "Good!" << endl;
    } else if (timecount < 10 && timecount > 5 && res == correct_res) {
        cout << "Satisfatory..." << endl;
    } else {
        cout << "Insufficient!!!!" << endl;
    }
}
