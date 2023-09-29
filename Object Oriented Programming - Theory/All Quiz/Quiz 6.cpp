#include <iostream>
#include <cmath>

using namespace std;

// SimpleCalculator class
class SimpleCalculator {
protected:
    double num1, num2;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void add() {
        cout << "Result of addition: " << num1 + num2 << endl;
    }
    void subtract() {
        cout << "Result of subtraction: " << num1 - num2 << endl;
    }
    void multiply() {
        cout << "Result of multiplication: " << num1 * num2 << endl;
    }
    void divide() {
        if (num2 != 0) {
            cout << "Result of division: " << num1 / num2 << endl;
        }
        else {
            cout << "Cannot divide by zero!" << endl;
        }
    }
};

// ScientificCalculator class
class ScientificCalculator {
protected:
    double num1, num2;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void Sin() {
        cout << "Result of sin(" << num1 << "): " << sin(num1) << endl;
    }
    void Cos() {
        cout << "Result of cos(" << num1 << "): " << cos(num1) << endl;
    }
    void Tan() {
        cout << "Result of tan(" << num1 << "): " << tan(num1) << endl;
    }
    void Log() {
        if (num1 > 0) {
            cout << "Result of log(" << num1 << "): " << log(num1) << endl;
        }
        else {
            cout << "Invalid input for log!" << endl;
        }
    }
};

// HybridCalculator class
class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void allOperations() {
       // SimpleCalculator::input();
        ScientificCalculator::input();
        add();
        subtract();
        multiply();
        divide();
        Sin();
        Cos();
        Tan();
        Log();
    }
};

int main() {
    HybridCalculator hc;
    hc.allOperations();
    return 0;
}
