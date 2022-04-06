#include <iostream>

int main(){
    // memory will throw random garbage value
    int elephant_count; 

    std::cout << "BRACED INITIALIZATION" << std::endl;
    // Braced Initialization
    int lion_count {}; // Initializes to zero
    int dog_count {10}; // Initializes to 10
    int cat_count {15}; // Initializes to 15

    // Can use expression as a initializer
    int domesticated_animals {dog_count + cat_count};
    std::cout << "Domesticated Animals Count : " << domesticated_animals << std::endl;
    // Warning occurred that 2.9 will change to be 2 (int)
    //int narrowing_conversion {2.9};

    std::cout << "FUNCTIONAL INITIALIZATION" << std::endl;
    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    std::cout << "Apple + Orange Count : " << apple_count + orange_count << std::endl;

    // Less safe than braced initialization (NO COMPILE ERROR -> change 2.9 to 2 silently)
    //int narrowing_conversion_functional (2.9);
    //std::cout << "Narrowing Conversion Functional : " << narrowing_conversion_functional << std::endl;

    // Assignmnet Initialization
    int bike_count = 2;
    int truck_count = 5;

    // Less safe similar to functional intialization
    //int narrowing_conversion_assignment = 2.9;
    //std::cout << "Narrowing Conversion Assignment : " << narrowing_conversion_assignment << std::endl;

    // Check the size of memory it use to store INTEGER using sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof bike_count : " << sizeof(bike_count) << std::endl;

    return 0;
}
