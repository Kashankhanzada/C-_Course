#include <iostream>
using namespace std;

int main() {
    // 1. Declaring an array of integers with a size of 5
    int arr[5] = {10, 20, 30, 40, 50};
    
    // 2. Accessing and printing array elements
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Accessing each element by index
    }
    cout << endl;

    // 3. Modifying an array element
    arr[2] = 35;  // Changing the value at index 2
    cout << "Modified array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Print modified array
    }
    cout << endl;

    // 4. Taking input for an array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;  // Input the size of the array
    int dynamicArr[n];  // Declare an array with size 'n'
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> dynamicArr[i];  // Taking input for each element
    }

    // 5. Printing the user input array
    cout << "User input array: ";
    for (int i = 0; i < n; i++) {
        cout << dynamicArr[i] << " ";  // Print user input array
    }
    cout << endl;

    return 0;
}

