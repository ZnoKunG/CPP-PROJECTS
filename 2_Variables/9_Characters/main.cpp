#include <iostream>

int main(){
    char charac1 {'a'};
    char charac2 {'b'};
    char charac3 {'c'};

    std::cout << charac1 << std::endl;
    std::cout << charac2 << std::endl;
    std::cout << charac3 << std::endl;

    std::cout << "sizeof(char) : " << sizeof(char) << std::endl;

    char value = 65; // ASCII CODE = "A"
    std::cout << "value : " << value << std::endl;
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;
    return 0;
}
