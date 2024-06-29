#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first numbers: ";
    cin  >> num1;
    cout<<"Enter second number: ";
    cin  >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "ADDITION IS :";
            cout << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "SUBTRACTION IS :";
            cout << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "MULTIPLICATION IS :";
            cout << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout <<"DIVISION IS  :";
                cout << result;
            } else {
                cout << "Error: Division by zero is not allowed.";
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!";
            return 1;
    }

    
    return 0;
}
