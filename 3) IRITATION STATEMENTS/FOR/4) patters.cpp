#include <iostream>
using namespace std;

int main() {
    int n = 5; // You can adjust 'n' for bigger patterns

    // 1. Solid Square
    cout << "1. Solid Square" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << "* ";
        cout << endl;
    }
    cout << endl;

    // 2. Hollow Square
    cout << "2. Hollow Square" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // 3. Right Triangle
    cout << "3. Right Triangle" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    cout << endl;

    // 4. Inverted Right Triangle
    cout << "4. Inverted Right Triangle" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    cout << endl;

    // 5. Pyramid
    cout << "5. Pyramid" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
    cout << endl;

    // 6. Inverted Pyramid
    cout << "6. Inverted Pyramid" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
    cout << endl;

    // 7. Diamond
    cout << "7. Diamond" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = i; j < n; j++) cout << " ";
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
        cout << endl;
    }
    cout << endl;

    // 8. Half Pyramid (Numbers)
    cout << "8. Half Pyramid (Numbers)" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
    cout << endl;

    // 9. Inverted Half Pyramid (Numbers)
    cout << "9. Inverted Half Pyramid (Numbers)" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
    cout << endl;

    // 10. Floyd's Triangle
    cout << "10. Floyd's Triangle" << endl;
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << count++ << " ";
        cout << endl;
    }
    cout << endl;

    // 11. 0-1 Triangle
    cout << "11. 0-1 Triangle" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << ((i + j) % 2) << " ";
        cout << endl;
    }
    cout << endl;

    // 12. Right-Aligned Triangle
    cout << "12. Right-Aligned Triangle" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << "  ";
        for (int k = 1; k <= i; k++) cout << "* ";
        cout << endl;
    }
    cout << endl;

    // 13. Number Pyramid
    cout << "13. Number Pyramid" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) cout << " ";
        for (int k = 1; k <= i; k++) cout << i << " ";
        cout << endl;
    }
    cout << endl;

    // 14. Continuous Numbers
    cout << "14. Continuous Numbers" << endl;
    count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << count++ << " ";
        cout << endl;
    }
    cout << endl;

    // 15. Star and Space X Shape
    cout << "15. X Shape with Stars" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 16. Alphabet Triangle
    cout << "16. Alphabet Triangle" << endl;
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << ch++ << " ";
        cout << endl;
    }
    cout << endl;

    // 17. Hollow Right Triangle
    cout << "17. Hollow Right Triangle" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // 18. Inverted Hollow Triangle
    cout << "18. Inverted Hollow Triangle" << endl;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // 19. Right Triangle (Alphabets)
    cout << "19. Right Triangle with Alphabets" << endl;
    for (int i = 1; i <= n; i++) {
        char alpha = 'A';
        for (int j = 1; j <= i; j++) {
            cout << alpha++ << " ";
        }
        cout << endl;
    }
    cout << endl;

    // 20. Inverted Number Triangle
    cout << "20. Inverted Number Triangle" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

