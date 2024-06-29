#include <iostream>

int main(){

char op;
double num1, num2, result;
std::cout << "||||||Calculator||||||\n";

std::cout << "Enter the operator (+ - * / ): ";
std::cin >> op;

std::cout << "Enter #1: ";
std::cin >> num1;

std::cout << "||||||||||||||||||||||\n";

std::cout << "Enter #2: ";
std::cin >> num2;

std::cout << "||||||||||||||||||||||\n";

switch (op){
    
case '+':
    result = num1 + num2;
    std::cout << "Result: " << result << '\n';
    break;

case '-':
    result = num1 - num2;
    std::cout << "Result: " << result << '\n';
    break;

case '*':
    result = num1 * num2;
    std::cout << "Result: " << result << '\n';
    break;

case '/':
    result = num1 / num2;
    std::cout << "Result: " << result << '\n';
    break;

default:
    std::cout << "Invalid operator\n";
    break;
}

std::cout << "||||||||||||||||||||||\n";


}