#include <iostream>

int main() {
    
    double celsius, fahrenheit;
    char choice;
    
    std::cout << "Enter 'C' to convert Fahrenheit to Celsius\n";
    std::cout << "Enter 'F' to convert Celsius to Fahrenheit\n";
    std::cin >> choice;
    
    if (choice == 'C' || choice == 'c'){
        
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> fahrenheit;
        
        celsius = (fahrenheit - 32) * 5/9;
        
        std::cout << "Temperature in Celsius: " << celsius << '\n';
        
    }else if (choice == 'F' || choice == 'f'){
        
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> celsius;
        
        fahrenheit = (celsius * 9/5) + 32;
        
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << '\n';
        
    }else{
        
        std::cout << "Invalid choice\n";
        
    }
    
    return 0;
}