#include <iostream>

// this will run after the program is opened
int main(){
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0F; // Hexadecimal
    int number4 = 0b0001111; // Binary

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;
    return 0;
}
