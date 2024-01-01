#include <iostream>

int main() 
{
    double num1, num2;
    char operation;

    std::cout << 'first number: ';
    std::cin >> num1;

    std::cout << 'second number: ';
    std::cin >> num2;

    std::cout << 'operation of use (+, -, /, *)';
    std::cin >> operation;

    switch (operation)
     {
        case '+': 
        std::cout << 'result: '  << num1 + num2 << std::endl;
        break;
        case '-':
        std::cout << 'result: ' << num1 - num2 << std::endl;
        break;
        case '/':
        if (num2 != 0) {
        std::cout << 'result: ' << num1 / num2 << std::endl;
        } 
        else {
            std::cout << 'error: attempted division by zero' << std::endl;
        }
        break;
        case '*':
        std::cout << 'result:' << num1 * num2 << std::endl;
        break;
        default: 
        std::cout << 'error; invalid operation' << std::endl;
}
 
}
