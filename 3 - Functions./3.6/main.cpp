#include <iostream>
#include <ctime>
#include <thread>

using namespace std;

time_t timeElapsed() {
    static time_t first_call = time(0);
    time_t current_call = time(0);
    return current_call - first_call;
}

int main() {
    cout << timeElapsed() << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << timeElapsed() << endl;
}
