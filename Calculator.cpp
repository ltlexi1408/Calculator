#include <iostream>

int main(){
    char op;
    double num1 = 0;
    double num2 = 0;
    double answer = 0;

    std::cin >> num1 >> op >> num2;

    switch(op){
        case '+':
            answer = num1 + num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << answer << std::endl;
            break;
        case '-':
            answer = num1 - num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << answer << std::endl;
            break;
        case '*':
            answer = num1 * num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << answer << std::endl;
            break;
        case '/':
            answer = num1 / num2;
            std::cout << num1 << " " << op << " " << num2 << " = " << answer << std::endl;
            break;
        default:
            std::cout << "Error" << std::endl;
    }
}