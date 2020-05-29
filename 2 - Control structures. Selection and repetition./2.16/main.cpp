#include <iostream>

using namespace std;

int main() {
    char operation;
    bool stop;
    double num1, num2, result, memory = 0.0;
    string command;

    while(!stop) {
        stop = false;
        cout << "Enter operation (+ - * / ): "; cin >> operation;
        cout << "Enter number 1: "; cin >> num1;
        cout << "Enter number 2: "; cin >> num2;

        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
        }
        cout << "The result of operation is " << result << endl;
        cout << endl << "Enter 'M' to save the result. " << endl;
        cout << "Enter 'MC' to clear the memory. " << endl;
        cout << "Enter 'M+' to add the current value to the memory. " << endl;
        cout << "Enter 'M-' to subtract the current value to the memory. " << endl;
        cout << "Enter 'MR' to show the content of the memory. " << endl;
        cout << "Enter 'C' to clear the content of the display. " << endl;
        cout << "Enter the command: " << endl;
        cin >> command;

        if (command == "M") {
            memory = result;
        } else if (command == "MC") {
            memory = 0.0;
        } else if (command == "M+") {
            memory += result;
        } else if (command == "M-") {
            memory -= result;
        } else if (command == "MR") {
            cout << memory << endl;
        } else if (command == "C") {
            stop = true; //Não sei se será a melhor forma mas wtv, foi o que me lembrei
        }
    }
    return 0;
}
