#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // 1. Solid Square
    cout << "1. Solid Square" << endl;
    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 2. Hollow Square
    cout << "2. Hollow Square" << endl;
    i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 3. Right Triangle
    cout << "3. Right Triangle" << endl;
    i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 4. Inverted Right Triangle
    cout << "4. Inverted Right Triangle" << endl;
    i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }
    cout << endl;

    // 5. Pyramid
    cout << "5. Pyramid" << endl;
    i = 1;
    while (i <= n) {
        int j = i;
        while (j < n) {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 6. Inverted Pyramid
    cout << "6. Inverted Pyramid" << endl;
    i = n;
    while (i >= 1) {
        int j = i;
        while (j < n) {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            cout << "*";
            k++;
        }
        cout << endl;
        i--;
    }
    cout << endl;

    // 7. Diamond
    cout << "7. Diamond" << endl;
    i = 1;
    while (i <= n) {
        int j = i;
        while (j < n) {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    i = n - 1;
    while (i >= 1) {
        int j = i;
        while (j < n) {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1) {
            cout << "*";
            k++;
        }
        cout << endl;
        i--;
    }
    cout << endl;

    // 8. Half Pyramid (Numbers)
    cout << "8. Half Pyramid (Numbers)" << endl;
    i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 9. Inverted Half Pyramid (Numbers)
    cout << "9. Inverted Half Pyramid (Numbers)" << endl;
    i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i--;
    }
    cout << endl;

    // 10. Floyd's Triangle
    cout << "10. Floyd's Triangle" << endl;
    i = 1;
    int count = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << count++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 11. 0-1 Triangle
    cout << "11. 0-1 Triangle" << endl;
    i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << ((i + j) % 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 12. Right-Aligned Triangle
    cout << "12. Right-Aligned Triangle" << endl;
    i = 1;
    while (i <= n) {
        int j = i;
        while (j < n) {
            cout << "  ";
            j++;
        }
        int k = 1;
        while (k <= i) {
            cout << "* ";
            k++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 13. Number Pyramid
    cout << "13. Number Pyramid" << endl;
    i = 1;
    while (i <= n) {
        int j = i;
        while (j < n) {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= i) {
            cout << i << " ";
            k++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 14. Continuous Numbers
    cout << "14. Continuous Numbers" << endl;
    count = 1;
    i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << count++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 15. X Shape
    cout << "15. X Shape" << endl;
    i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            if (j == i || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 16. Alphabet Triangle
    cout << "16. Alphabet Triangle" << endl;
    i = 1;
    char ch = 'A';
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 17. Hollow Right Triangle
    cout << "17. Hollow Right Triangle" << endl;
    i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            if (j == 1 || j == i || i == n)
                cout << "* ";
            else
                cout << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 18. Inverted Hollow Triangle
    cout << "18. Inverted Hollow Triangle" << endl;
    i = n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            if (j == 1 || j == i || i == n)
                cout << "* ";
            else
                cout << "  ";
            j++;
        }
        cout << endl;
        i--;
    }
    cout << endl;

    // 19. Right Triangle with Alphabets
    cout << "19. Right Triangle with Alphabets" << endl;
    i = 1;
    while (i <= n) {
        char alpha = 'A';
        int j = 1;
        while (j <= i) {
            cout << alpha++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    // 20. Inverted Number Triangle
    cout << "20. Inverted Number Triangle" << endl;
    i = 0;
    while (i < n) {
        int j = 1;
        while (j <= n - i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

