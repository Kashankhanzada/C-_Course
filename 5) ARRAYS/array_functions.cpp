#include <iostream>
#include <algorithm>  // For sort, reverse, fill, and find
using namespace std;

int main() {

    // Initializing a simple array
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Accessing elements of an array
    cout << "Accessing element at index 2: " << arr[2] << endl;  // Output: 3

    // Modifying elements of an array
    arr[0] = 10;
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Output: 10 2 3 4 5
    }
    cout << endl;

    // Finding the size of an array
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array size: " << size << endl;  // Output: 5

    // Filling an array with a specific value (using std::fill)
    fill(arr, arr + 5, 0);  // Filling the entire array with 0
    cout << "Filled array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Output: 0 0 0 0 0
    }
    cout << endl;

    // Copying arrays (using std::copy)
    int arrCopy[5];
    copy(arr, arr + 5, arrCopy);
    cout << "Copied array: ";
    for (int i = 0; i < 5; i++) {
        cout << arrCopy[i] << " ";  // Output: 0 0 0 0 0
    }
    cout << endl;

    // Comparing two arrays (using std::equal)
    int arr2[5] = {0, 0, 0, 0, 0};
    if (equal(arr, arr + 5, arr2)) {
        cout << "Arrays are equal" << endl;
    } else {
        cout << "Arrays are not equal" << endl;
    }

    // Reversing an array (using std::reverse)
    reverse(arr, arr + 5);  // Reverses the array in-place
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Output: 0 0 0 0 0 (In this case, the array is already filled with 0)
    }
    cout << endl;

    // Sorting an array (using std::sort)
    int arr3[5] = {5, 2, 9, 1, 5};
    sort(arr3, arr3 + 5);  // Sorts the array in ascending order
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << " ";  // Output: 1 2 5 5 9
    }
    cout << endl;

    // Finding an element in the array (using std::find)
    auto it = find(arr3, arr3 + 5, 5);  // Finds the element 5
    if (it != arr3 + 5) {
        cout << "Element found at index: " << it - arr3 << endl;  // Output: 2 (Index of element 5)
    } else {
        cout << "Element not found" << endl;
    }

    // Shifting elements of the array manually (right shift by 1)
    int arr4[5] = {1, 2, 3, 4, 5};
    int last = arr4[4];
    for (int i = 3; i >= 0; i--) {
        arr4[i + 1] = arr4[i];  // Shift elements to the right
    }
    arr4[0] = last;  // Place the last element at the first position
    cout << "Array after right shift by 1: ";
    for (int i = 0; i < 5; i++) {
        cout << arr4[i] << " ";  // Output: 5 1 2 3 4
    }
    cout << endl;

    // Multi-dimensional array (2D array)
    int arr2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Element at (1, 2): " << arr2D[1][2] << endl;  // Output: 6

    // Array of pointers
    int a = 10, b = 20, c = 30;
    int* arrPtr[3] = {&a, &b, &c};
    cout << "Value at arrPtr[1]: " << *arrPtr[1] << endl;  // Output: 20

    // Using vector (dynamic array)
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);  // Adds an element at the end
    cout << "Vector elements: ";
    for (int num : vec) {
        cout << num << " ";  // Output: 1 2 3 4 5 6
    }
    cout << endl;

    return 0;
}

