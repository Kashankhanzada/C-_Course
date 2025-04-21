#include <iostream>
#include <string>  // Required for std::string
using namespace std;

int main() {
    // Creating a string
    string str = "Hello, World!";
    
    // Printing the string
    cout << "C++ string: " << str << endl;

    // String operations
    cout << "Length of the string: " << str.length() << endl;  // Length of the string
    cout << "First character: " << str[0] << endl;  // Accessing first character

    // Modifying the string
    str = "Hello, C++!";
    cout << "Modified string: " << str << endl;

    // Concatenating two strings
    string str2 = " How are you?";
    string result = str + str2;  // Concatenation
    cout << "Concatenated string: " << result << endl;

    // String comparison
    if (str == "Hello, C++!") {
        cout << "The string is: Hello, C++!" << endl;
    }

    return 0;
}

