#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum: " << a+b << endl;
}

void subtract(int a, int b) {
    cout << "Difference: " << a-b << endl;
}

void multiply(int a, int b) {
    cout << "Product: " << a*b << endl;
}

void division(int a, int b) {
    if (b != 0) {
        cout << "Quotient: " << a/b << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

int main() {
    int num1, num2;
    int operation;
    char repeat;

    do {
        cout << "Enter First number: ";
        cin >> num1;
        cout << "Enter Second number: ";
        cin >> num2;

        cout << "Choose the operation:\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "Enter the number corresponding to the operation: ";
        cin >> operation;

        if (operation == 1) {
            add(num1, num2);
        } else if (operation == 2) {
            subtract(num1, num2);
        } else if (operation == 3) {
            multiply(num1, num2);
        } else if (operation == 4) {
            division(num1, num2);
        } else {
            cout << "Invalid operation!" << endl;
        }

        cout << "Do you want to perform another operation? (yes/no): ";
        cin >> repeat;

    } while (repeat == 'yes' || repeat == 'Yes');

    return 0;
}
    
