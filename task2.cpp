#include <iostream>
using namespace std;
int main(){
    double num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << std::endl;
            } else {
                cout << "Error: Cannot divide by zero.\n";
            }
            break;
        default:
            cout << "Invalid operation. Please choose +, -, *, or /.\n";
            break;
    }

    return 0;
}
