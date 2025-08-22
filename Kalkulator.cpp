#include <iostream>



int main() {

double first_number;
double second_number;
char math_operator;

std::cout << "Enter first number: ";
std::cin >> first_number;
std::cout << "Enter second number: ";
std::cin >> second_number;


std::cout << "Enter an operator ";
std::cin >> math_operator;

switch (math_operator) {
    case '+':
        std::cout << "Result: " << (first_number + second_number) << std::endl;
        break;
    case '-':
        std::cout << "Result: " << (first_number - second_number) << std::endl;
        break;
    case '*':
        std::cout << "Result: " << (first_number * second_number) << std::endl;
        break;
    case '/':
        if (second_number != 0) {
            std::cout << "Result: " << (first_number / second_number) << std::endl;
        } else {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
        }
        break;
    default:
        std::cout << "Error: Invalid operator." << std::endl;
}

return 0;
}