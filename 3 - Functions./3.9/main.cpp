#include <iostream>

using namespace std;

bool isleap(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int days_num(int month, int year) {
    if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) {
        return 31;
    } else if (month == 2) {
        if (isleap(year) == true) {
            return 29;
        } else {
            return 28;
        }
    } else {
        return 30;
    }
}

int monthCode(int month, int year) {
    switch (month) {
        case 1:
            if (isleap(year)) {
                return 6;
            } else {
                return 0;
            }
        case 2:
            if (isleap(year)) {
                return 2;
            } else {
                return 3;
            }
        case 3: return 3;
        case 4: return 6;
        case 5: return 1;
        case 6: return 4;
        case 7: return 6;
        case 8: return 2;
        case 9: return 5;
        case 10: return 0;
        case 11: return 3;
        case 12: return 5;
    }
    return 0;
}

int weekDay(int day, int month, int year) {
    // Saturday = 0, Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6
    return ((int) (5*(year % 100)/4 + monthCode(month, year) + day - 2 * ((year / 100) % 4)) + 7 ) % 7;
}

int decentMod(int n, int d) {
    int result = n % d;
    while (result <= 0) {
        result += d;
    }
    return result;
}

void showMonth(int month, int year) {
    int nDays = days_num(month, year);
    int firstDay = weekDay(1, month, year);
    int firstWeek = (firstDay) % 7;
    if (firstWeek == 0) firstWeek += 1;
    switch (month) {
        case 1:
            cout << "January/" << year << endl;
            break;
        case 2:
            cout << "February/" << year << endl;
            break;
        case 3:
            cout << "March/" << year << endl;
            break;
        case 4:
            cout << "April/" << year << endl;
            break;
        case 5:
            cout << "May/" << year << endl;
            break;
        case 6:
            cout << "June/" << year << endl;
            break;
        case 7:
            cout << "July/" << year << endl;
            break;
        case 8:
            cout << "August/" << year << endl;
            break;
        case 9:
            cout << "September/" << year << endl;
            break;
        case 10:
            cout << "October/" << year << endl;
            break;
        case 11:
            cout << "November/" << year << endl;
            break;
        case 12:
            cout << "December/" << year << endl;
            break;
    }
    cout << "Sun\tMon\tTue\tWed\tThu\tFri\tSat" << endl;
    cout << "";
    for (int i = 1; i < decentMod((firstDay), 7); i ++) {
        cout << '\t';
    }
    for (int j = 1; j <= nDays; j++) {
        cout << j << '\t';
        if (weekDay(j, month, year) % 7 == 0) {
            cout << endl;
        }
    }
}

void showYear(int year) {
    for (int i = 1; i <= 12; i++) {
        showMonth(i, year);
        cout << endl;
    }
}

int main() {
    int year;
    cout << "Insert year: "; cin >> year;
    showYear(year);
}