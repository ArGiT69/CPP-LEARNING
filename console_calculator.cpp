#include<iostream>
int main(){
 char operation;
 double num1, num2;
 double result;
 std::cout << "Welcome to the Console Calculator!" << std::endl;
    std::cout << "You can perform addition (+), subtraction (-), multiplication (*), and division (/)." << std::endl;
 std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;
    switch (operation ){
        case '+':
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << num1 << " / " << num2 << " = " << result;
            } else {
                std::cout << "Error: Division by zero is not allowed.";
            }
            break;
            std::cout << num1 << " + " << num2 << " = " << result;
            break;
        default:
            std::cout << "Error: Invalid operator.";
    }


    return 0;
}