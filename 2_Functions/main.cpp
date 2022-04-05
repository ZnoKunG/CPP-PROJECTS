#include <iostream>

//**Function need to run before used!!!
int AddNumber(int first_number, int second_number){
    return first_number + second_number;
}

// this will run after the program is opened
int main(){
    
    int first_number {3}; //Statement
    int second_number {5};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;
    std::cout << "Sum of two numbers : " << AddNumber(first_number, second_number) << std::endl;
    std::cout << "Sum of 6 and 14 : " << AddNumber(6, 14) << std::endl;
}

