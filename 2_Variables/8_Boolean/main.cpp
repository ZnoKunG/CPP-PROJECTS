#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "STOP!!" << std::endl;
    }else{
        std::cout << "Go Through!" << std::endl;
    }

    std::cout << std::boolalpha; // Use to display boolean in true or false instead of 0 or 1
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl; // Take one byte of memory
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    return 0;
}
