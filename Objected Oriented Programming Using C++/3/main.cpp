#include <iostream>
#include "Person.h"
#include "Date.h"

using namespace std;

int main() {
    Person p1("Tiago Pinto", 'M', Date());
    p1.showData();
    return 0;
}