#include <iostream>

int main(){
    int var1 {123}; // Declare var1 and initialize var1 as 123
    std::cout << "var1 : " << var1 << std::endl;

    var1 = 55; // Assign a new value
    std::cout << "var1 : " << var1 << std::endl;
    // Same as any type of variables

    // Auto type deduction!!
    auto var2 {333u}; // Declare with 'type deduction' initialization

    var2 = -22; // Assign negative number (not an unsigned) => Danger! NO compiler error and throw garbage value
    std::cout << "var2 : "<< var2 << std::endl;


    return 0;
}
