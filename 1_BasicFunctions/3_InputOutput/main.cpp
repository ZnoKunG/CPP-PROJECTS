#include <iostream>
#include <string> // include string variables
// All above are Standard library components

int main(){
    // Additonal function to print out data
    /*
    std::cerr << "Error message : Sth is wrong" << std::endl;
    std::clog << "Log message : Sth happened" << std::endl;
    */

    int age;
    std::string name;

    std::cout << "Please type your name and age : ";

    //DATA INPUT
    /* FIRST METHOD
    // direction of the arrow have to be >> because *std::cin receive the data from the terminal into our program!!!
    std::cin >> name;
    std::cin >> age;
    */

    /* SECOND METHOD
    std::cin >> name >> age; 
    // this function cannot get the full name with space */

    // THIRD METHOD
    std::string full_name;
    std::getline(std::cin, full_name);
    std::cin >> age;
    
    std::cout << "Hello " << full_name << ". You are " << age << " years old" << std::endl;
    return 0;
}
