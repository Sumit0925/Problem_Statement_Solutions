// Problem-1: Create a small calculator which performs operations such as Addition, Subtraction,        Multiplication and Division using class.
// Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
// Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string

#include <iostream>
#include <string>
using namespace std;

// Calculator Class
class Calculator {
private:
    double a, b;
    string operation;

public:
    // Constructor
    Calculator(double num1, double num2, string op) {
        a = num1;
        b = num2;
        operation = op;
    }

    // Calculate method
    double calculate() {
        if (operation == "addition" || operation == "add" || operation == "+") {
            return a + b;
        }
        else if (operation == "subtraction" || operation == "subtract" || operation == "-") {
            return a - b;
        }
        else if (operation == "multiplication" || operation == "multiply" || operation == "*") {
            return a * b;
        }
        else if (operation == "division" || operation == "divide" || operation == "/") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        }
        else {
            cout << "Error: Invalid operation!" << endl;
            return 0;
        }
    }

    // Display result
    void displayResult() {
        double result = calculate();
        cout << "Result: " << result << endl;
    }
};

int main() {
    cout << "==========Simple Calculator Program ==========" << endl;
    
    // User input example
    // cout << "\n--- Custom Calculation ---" << endl;
    double num1, num2;
    string op;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (add/subtract/multiply/divide): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    Calculator userCalc(num1, num2, op);
    userCalc.displayResult();
    
    return 0;
}