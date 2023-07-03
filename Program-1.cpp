#include <iostream>
#include <string>

class Calculator {
public:
    double addition(double a, double b) {
        return a + b;
    }

    double subtraction(double a, double b) {
        return a - b;
    }

    double multiplication(double a, double b) {
        return a * b;
    }

    double division(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Division by zero" << std::endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    std::string operation;
    
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> operation;
    
    Calculator calc;
    double result;
    
    if (operation == "+") {
        result = calc.addition(a, b);
    } else if (operation == "-") {
        result = calc.subtraction(a, b);
    } else if (operation == "*") {
        result = calc.multiplication(a, b);
    } else if (operation == "/") {
        result = calc.division(a, b);
    } else {
        std::cout << "Invalid operation" << std::endl;
        return 0;
    }
    
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
