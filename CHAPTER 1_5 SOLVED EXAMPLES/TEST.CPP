/*
Explanation of the 20 questions:
Print all elements of an array: Loops through an array and prints each element.

Find the sum of elements in an array: Adds up all elements of an array.

Find the largest element in an array: Iterates through the array to find the maximum value.

Reverse the elements of an array: Uses std::reverse to reverse the order of elements.

Count the number of even numbers in an array: Iterates through the array to count even numbers.

Check if an element exists in the array: Uses a loop to check if an element is present in the array.

Swap two elements of an array: Swaps two elements using the swap function.

Use a while loop to print elements of an array: Prints elements of an array using a while loop.

Print the elements of an array in reverse order using a while loop: Prints the array in reverse using a while loop.

Find the index of a given element in an array: Uses a loop to find the index of a specific element.

Use a for loop to print elements of a string: Loops through a string and prints each character.

Convert a string to uppercase: Uses std::transform to convert a string to uppercase.

Count the number of vowels in a string: Iterates through a string to count the vowels.

Check if a string is a palindrome: Checks if a string is the same when reversed.

Compare two strings: Compares two strings using ==.

Concatenate two strings: Uses the + operator to concatenate two strings.

Convert an integer to string: Converts an integer to a string using to_string.

Convert a string to integer: Converts a string to an integer using stoi.

Check if a number is even or odd using if-else: Checks whether a number is even or odd.

Nested if-else to determine grade based on marks: Uses if-else statements to determine a grade based on marks.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    
    // 1. Print all elements of an array.
    cout << "1. Print all elements of an array:" << endl;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // 2. Find the sum of elements in an array.
    cout << "2. Find the sum of elements in an array:" << endl;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl << endl;

    // 3. Find the largest element in an array.
    cout << "3. Find the largest element in an array:" << endl;
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Largest element: " << max << endl << endl;

    // 4. Reverse the elements of an array.
    cout << "4. Reverse the elements of an array:" << endl;
    reverse(arr, arr + size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // 5. Count the number of even numbers in an array.
    cout << "5. Count the number of even numbers in an array:" << endl;
    int evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    cout << "Even count: " << evenCount << endl << endl;

    // 6. Check if an element exists in the array.
    cout << "6. Check if an element exists in the array:" << endl;
    int target = 40;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    cout << "Element " << (found ? "found" : "not found") << " in the array." << endl << endl;

    // 7. Swap two elements of an array.
    cout << "7. Swap two elements of an array:" << endl;
    swap(arr[0], arr[1]);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // 8. Use a while loop to print elements of an array.
    cout << "8. Use a while loop to print elements of an array:" << endl;
    int i = 0;
    while (i < size) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl << endl;

    // 9. Print the elements of an array in reverse order using a while loop.
    cout << "9. Print the elements of an array in reverse order using a while loop:" << endl;
    i = size - 1;
    while (i >= 0) {
        cout << arr[i] << " ";
        i--;
    }
    cout << endl << endl;

    // 10. Find the index of a given element in an array.
    cout << "10. Find the index of a given element in an array:" << endl;
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    cout << "Index of " << target << ": " << (index == -1 ? "Not Found" : to_string(index)) << endl << endl;

    // 11. Use a for loop to print elements of a string.
    cout << "11. Use a for loop to print elements of a string:" << endl;
    string str = "Hello";
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";
    }
    cout << endl << endl;

    // 12. Convert a string to uppercase.
    cout << "12. Convert a string to uppercase:" << endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Uppercase string: " << str << endl << endl;

    // 13. Count the number of vowels in a string.
    cout << "13. Count the number of vowels in a string:" << endl;
    int vowelCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowelCount++;
        }
    }
    cout << "Vowel count: " << vowelCount << endl << endl;

    // 14. Check if a string is a palindrome.
    cout << "14. Check if a string is a palindrome:" << endl;
    string palindrome = "madam";
    int len = palindrome.length();
    bool isPalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (palindrome[i] != palindrome[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    cout << (isPalindrome ? "Palindrome" : "Not Palindrome") << endl << endl;

    // 15. Compare two strings.
    cout << "15. Compare two strings:" << endl;
    string str1 = "apple", str2 = "apple";
    if (str1 == str2) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
    cout << endl;

    // 16. Concatenate two strings.
    cout << "16. Concatenate two strings:" << endl;
    string str3 = str1 + str2;
    cout << "Concatenated string: " << str3 << endl << endl;

    // 17. Convert an integer to string.
    cout << "17. Convert an integer to string:" << endl;
    int num = 123;
    string numStr = to_string(num);
    cout << "Integer to string: " << numStr << endl << endl;

    // 18. Convert a string to integer.
    cout << "18. Convert a string to integer:" << endl;
    string numStr2 = "456";
    int numInt = stoi(numStr2);
    cout << "String to integer: " << numInt << endl << endl;

    // 19. Check if a number is even or odd using if-else.
    cout << "19. Check if a number is even or odd using if-else:" << endl;
    int number = 4;
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    cout << endl;

    // 20. Use a nested if-else to determine grade based on marks.
    cout << "20. Use a nested if-else to determine grade based on marks:" << endl;
    int marks = 85;
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    cout << endl;

    return 0;
}

