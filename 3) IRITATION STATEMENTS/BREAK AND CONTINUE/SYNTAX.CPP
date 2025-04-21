#include <iostream>
using namespace std;

int main() {
    // Example 1: Using break
    cout << "Using break:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit the loop when i equals 5
        }
        cout << i << " ";
    }
    cout << endl << endl;

    // Example 2: Using continue
    cout << "Using continue:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;  // Skip printing when i equals 5
        }
        cout << i << " ";
    }
    cout << endl << endl;

    // Example 3: break in a nested loop
    cout << "Using break in nested loops:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                break;  // Break out of inner loop when i == 2 and j == 2
            }
            cout << "(" << i << ", " << j << ") ";
        }
    }
    cout << endl << endl;

    // Example 4: continue in a nested loop
    cout << "Using continue in nested loops:" << endl;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == 2 && j == 2) {
                continue;  // Skip the current iteration when i == 2 and j == 2
            }
            cout << "(" << i << ", " << j << ") ";
        }
    }

    return 0;
}

