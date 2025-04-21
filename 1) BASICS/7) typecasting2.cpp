#include <iostream>
using namespace std;

int main() {
    // Implicit Type Casting (automatic by compiler)
    int intVal = 10;
    float floatVal = intVal;  // int to float (automatically)
    cout << "Implicit Casting (int to float): " << floatVal << endl;

    // Explicit Type Casting using C-style
    float originalFloat = 5.75;
    int castedInt = (int)originalFloat;  // C-style casting
    cout << "C-style Casting (float to int): " << castedInt << endl;

    // Explicit Type Casting using Function-style
    double doubleVal = 9.99;
    int intFromDouble = int(doubleVal);  // Function-style
    cout << "Function-style Casting (double to int): " << intFromDouble << endl;

    // Static Cast (Safe and Preferred)
    double price = 99.95;
    int roundedPrice = static_cast<int>(price);  // Recommended in C++
    cout << "static_cast<double to int>: " << roundedPrice << endl;

    // Char to int (ASCII values)
    char letter = 'A';
    int ascii = (int)letter;
    cout << "ASCII value of '" << letter << "' is: " << ascii << endl;

    // int to char (using ASCII)
    int num = 66;
    char fromAscii = (char)num;
    cout << "Character for ASCII " << num << " is: " << fromAscii << endl;

    // Casting with division
    int a = 7, b = 2;
    float result1 = a / b;  // Integer division (truncates decimal)
    float result2 = (float)a / b;  // Correct float division
    cout << "Integer division (7 / 2): " << result1 << endl;
    cout << "Float division ((float)7 / 2): " << result2 << endl;

    return 0;
}

