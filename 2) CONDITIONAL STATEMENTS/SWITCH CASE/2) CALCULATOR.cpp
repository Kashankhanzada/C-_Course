#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;

    cout<<"Enter two numbers: ";
    cin>>num1 >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            cout<<"Result: "<< result;
            break;
        case '-':
            result = num1 - num2;
            cout<<"Result: "<< result;
            break;
        case '*':
            result = num1 * num2;
            cout<<"Result: "<< result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout<<"Result: "<< result;
            } else {
                cout<<"Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout<<"Error: Invalid operator.\n";
    }

}
