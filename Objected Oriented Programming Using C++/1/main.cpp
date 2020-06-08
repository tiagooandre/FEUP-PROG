#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class Date {
public:
    Date();
    Date(unsigned int year, unsigned int month,unsigned int day);
    Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
    void setYear(unsigned int year) ;
    void setMonth(unsigned int month) ;
    void setDay(unsigned int day) ;
    void setDate(unsigned int year, unsigned int month, unsigned int day) ;
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    string getDate() const; // returns the date in format "yyyy/mm/dd"
    void show() const;
    // c)
    bool isValid();
    bool isLeapYear() const;
    bool isEqualTo(const Date &date) const;
    bool isNotEqualTo(const Date &date) const;
    bool isAfter(const Date &date) const;
    bool isBefore(const Date &date) const;
    // g)
    void showMod();
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
    unsigned int getDaysInMonth(); //for c) isValid()
};

// a)

Date::Date(unsigned int year, unsigned int month, unsigned int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::Date(string yearMonthDay) {
    char ch = '/';
    istringstream iss(yearMonthDay);
    if (iss >> year >> ch >> month >> ch >> day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
}

void Date::setYear(unsigned int year) {
    this->year = year;
}

void Date::setMonth(unsigned int month) {
    this->month = month;
}

void Date::setDay(unsigned int day) {
    this->day = day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

unsigned int Date::getYear() const {
    return year;
}

unsigned int Date::getMonth() const {
    return month;
}

unsigned int Date::getDay() const {
    return day;
}

string Date::getDate() const {
    stringstream ss;
    ss << setfill('0') << setw(4) << year << "/" << setw(2) << month << "/" << setw(2) << day << endl;
}

void Date::show() const {
    cout << getDate();
}

// c)
unsigned int Date::getDaysInMonth() {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        return isLeapYear() ? 29 : 28;
    }
    else {
        return 0;
    }
}

bool Date::isLeapYear() const {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

bool Date::isValid() {
    if (day > getDaysInMonth() || month > 12 || month == 0) {
        return false;
    }
    return true;
}

bool Date::isEqualTo(const Date &date) const {
    return day == date.day && month == date.month && year == date.year;
}

bool Date::isNotEqualTo(const Date &date) const {
    return !isEqualTo(date);
}

bool Date::isAfter(const Date &date) const {
    if (year > date.year) return true;
    else if (month > date.month) return true;
    else return day > date.day;
}

bool Date::isBefore(const Date &date) const {
    return !isAfter(date) && isNotEqualTo(date);
}

// e)
// A classe Data ainda não tem nenhum construtor vazio e, por isso, não aceitaria Date d1;

// f)
Date::Date() { //Data do computador
    time_t t = time(0);
    tm* now = localtime(&t);
    year = now->tm_year+1900;
    month = now->tm_mon+1;
    day = now->tm_mday;
}

// g)
void Date::showMod() {
    std::cout << std::setfill('0') << std::setw(4) << year << std::setw(2) << month
              << std::setw(2) << day;
}

int main() {
    // b)
//    Date date1(2010, 03, 13);
//    Date date2 = Date("2020/05/25");
//    date1.setDay(3);
//    date1.setMonth(3);
//    date1.setYear(3);
//    date1.show();
//    std::cout << "\n";
//    date2.show();
//    date1.setDate(2017, 3, 12);
//    std::cout << "\n" << date2.getDay() << " " << date2.getMonth() << " " << date2.getYear() << "\n";

    // d)
//    Date date1(2020, 2, 29);
//    std::cout << date1.isValid() << "\n";
//
//    Date date2(2007, 3, 21);
//    std::cout << date1.isAfter(date2) << "\n";
//
//    Date date3(2020, 2, 29);
//    std::cout << date1.isEqualTo(date3) << "\n";
//
//    std::cout << date2.isBefore(date3) << "\n";

    // g)
    Date date1;
    date1.showMod();
}
