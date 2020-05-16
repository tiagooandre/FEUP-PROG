#include <iostream>

using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2, days, hours, minutes, seconds;

    cout << "Time 1 (hours, minutes and seconds): " << endl;
    cin >> h1 >> m1 >> s1;
    cout << "Time 2 (hours, minutes and desconds): " << endl;
    cin >> h2 >> m2 >> s2;

    seconds = s1 + s2;
    minutes = m1 + m2;
    hours = h1 + h2;
    days = 0;

    if (seconds > 60) {
        seconds = seconds - 60;
        minutes += 1;
        if (minutes > 60) {
            minutes = minutes - 60;
            hours += 1;
            if (hours > 24) {
                hours = hours - 24;
                days += 1;
            }
        }
    }

    cout << "Time 1 + Time 2 = " << days << " day(s) " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " seconds." << endl;
}
