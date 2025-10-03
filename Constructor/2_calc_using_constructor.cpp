/*2. Write a program of Addition, Subtraction, Division,
Multiplication usingconstructor.*/
#include <iostream>
using namespace std;

class Calculator {
private:
    int n1, n2;

public:
    // Constructor
    Calculator(int a, int b) {
        n1 = a;
        n2 = b;
    }

    // Addition Function
    int add() {
        return n1 + n2;
    }

    // Subtraction Function
    int subtract() {
        return n1 - n2;
    }

    // Multiplication Function
    int multiply() {
        return n1 * n2;
    }

    // Division Function
    int divide() {
        if (n2 != 0) {
            return n1 / n2;
        } else {
            cout << "\n\n\t Division by zero is not allowed." << endl;
            return 0;
        }
    }
};

int main() {
    int a, b;

    cout << "\n\n\t Enter first number: ";
    cin >> a;
    cout << "\n\n\t Enter second number: ";
    cin >> b;

    Calculator calc(a, b);

    cout << "\n\t Addition: " << calc.add() << endl;
    cout << "\n\t Subtraction: " << calc.subtract() << endl;
    cout << "\n\t Multiplication: " << calc.multiply() << endl;
    cout << "\n\t Division: " << calc.divide() << endl;

    return 0;
}
