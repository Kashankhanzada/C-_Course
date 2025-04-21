// kashan ali khan ..........................programmer
#include <iostream>
#include <string>  // Include the string library
using namespace std;

int main() {
    // 1. Declaring a string
    string str = "Hello, World!";
    cout << "Original string: " << str << endl;

    // 2. Length of a string
    cout << "Length of the string: " << str.length() << endl;  // Returns the length of the string (number of characters)

    // 3. Accessing individual characters
    cout << "First character: " << str[0] << endl;  // Access the first character (index 0)
    cout << "Last character: " << str[str.length() - 1] << endl;  // Access the last character (index = length - 1)

    // 4. Modifying a string
    str[7] = 'C';  // Modify the character at index 7 (changes 'W' to 'C')
    cout << "Modified string: " << str << endl;

    // 5. Append to a string (Concatenation)
    str.append(" C++ Programming!");  // Append another string to the end
    cout << "Appended string: " << str << endl;

    // 6. String concatenation using '+'
    string str2 = " Let's learn it!";
    string result = str + str2;  // Concatenate two strings using '+'
    cout << "Concatenated string: " << result << endl;

    // 7. Finding a substring
    size_t pos = str.find("World");  // Find the position of the substring "World"
    if (pos != string::npos) {  // string::npos means substring is not found
        cout << "\"World\" found at position: " << pos << endl;
    } else {
        cout << "\"World\" not found" << endl;
    }

    // 8. Erasing part of the string
    str.erase(7, 5);  // Erase 5 characters starting from index 7 (removes "C++ P")
    cout << "String after erasing: " << str << endl;

    // 9. Substring extraction
    string subStr = str.substr(0, 5);  // Extract substring starting from index 0 with length 5 ("Hello")
    cout << "Extracted substring: " << subStr << endl;

    // 10. String comparison
    string str3 = "Hello, World!";
    if (str == str3) {  // Check if two strings are equal
        cout << "The strings are identical!" << endl;
    } else {
        cout << "The strings are different!" << endl;
    }

    // 11. Converting string to uppercase
    for (char &ch : str) {  // Loop through each character
        ch = toupper(ch);  // Convert character to uppercase
    }
    cout << "Uppercase string: " << str << endl;

    // 12. Converting string to lowercase
    for (char &ch : str) {  // Loop through each character
        ch = tolower(ch);  // Convert character to lowercase
    }
    cout << "Lowercase string: " << str << endl;

    // 13. Checking if a string is empty
    string emptyStr;
    cout << "Is the string empty? " << (emptyStr.empty() ? "Yes" : "No") << endl;  // Checks if the string is empty

    // 14. Clearing a string
    str.clear();  // Clears the content of the string (makes it empty)
    cout << "String after clear(): " << (str.empty() ? "Empty" : str) << endl;

    // 15. Inserting into a string
    str = "Hello, ";
    str.insert(7, "C++ ");  // Insert "C++ " at index 7
    cout << "String after insert(): " << str << endl;

    // 16. Replacing part of the string
    str.replace(7, 4, "World");  // Replace 4 characters starting from index 7 with "World"
    cout << "String after replace(): " << str << endl;

    // 17. String to integer conversion
    string numberStr = "123";
    int num = stoi(numberStr);  // Convert string "123" to integer 123
    cout << "Converted string to integer: " << num << endl;

    // 18. Integer to string conversion
    int num2 = 456;
    string numStr = to_string(num2);  // Convert integer 456 to string "456"
    cout << "Converted integer to string: " << numStr << endl;

    // 19. String find_last_of (find last occurrence of a character)
    size_t lastPos = str.find_last_of("o");  // Find the last occurrence of 'o'
    cout << "Last occurrence of 'o' at position: " << lastPos << endl;

    // 20. String reverse (using custom method)
    string reverseStr = "Hello!";
    for (int i = reverseStr.length() - 1; i >= 0; i--) {
        cout << reverseStr[i];  // Print characters from last to first
    }
    cout << endl;

    return 0;
}

/*

NOTES: 

length(): Returns the number of characters in the string.

[index]: Allows access to a character at a specific index.

append(): Adds another string to the end of the string.

+ operator: Concatenates two strings.

find(): Finds the first occurrence of a substring and returns its position. If not found, it returns string::npos.

erase(): Removes a portion of the string, starting at a given index and for a specified length.

substr(): Extracts a substring from a string, starting at a specified index and length.

== (Comparison): Compares two strings for equality.

toupper()/tolower(): Converts a character to uppercase or lowercase.

empty(): Returns true if the string is empty, otherwise false.

clear(): Removes all characters from the string.

insert(): Inserts a string at a specific position in the original string.

replace(): Replaces a part of the string with another string.

stoi(): Converts a string to an integer.

to_string(): Converts an integer to a string.

find_last_of(): Finds the last occurrence of a character.

Reversing a string manually: Iterates through the string from the end to the beginning to reverse it.

*/
