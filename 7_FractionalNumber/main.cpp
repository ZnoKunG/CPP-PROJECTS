#include <iostream>
#include <iomanip>

int main(){
    float number1 {1.12346678901234567890f}; // Precision : 7 fewest (f)
    double number2 {1.12346678901234567890}; // Precision : 15 (normally used)
    long double number3 {1.12346678901234567890L}; // Precision > 15 but use more memory (L)
    // Need to put *suffixes to initialize other variables otherwise the default is "double"

    std::cout << "sizeof float : " << sizeof(number1) << std::endl;
    std::cout << "sizeof double : " << sizeof(number2) << std::endl;
    std::cout << "sizeof long double : " << sizeof(number3) << std::endl;

    std::cout << std::setprecision(20); // Set the precision from std::cout (otherwise normally it will show only 6 precision)
    std::cout << "Float number : " << number1 << std::endl; // After 7 digits the memory will throw garbage value
    std::cout << "Double number : " << number2 << std::endl;
    std::cout << "Long double number : " << number3 << std::endl;

    // Scientific Notation (EX. e8 = 10^-8)
    double scientific_not1 {1.92400023e8};
    double scientific_not2 {3.49800023e-11};

    // Special case differed from int
    double number4 {5.6};
    double number5 {-5.6};
    double number6 {};
    double number7 {};

    //Infinity
    std::cout << "Float number / 0 : " << number4 / number6 << std::endl;
    std::cout << "Negative float number / 0 : " << number5 / number6 << std::endl;

    //NaN
    std::cout << "0 / 0 : " << number6 / number7 << std::endl;

    // Prefixes are IMPORTANT!!
    float number8 {102400023.0f};
    float number9 {102400023.0};
    double number10 {102400023.0f}; // This gonna give the same result as the number8 because we use the prefix f to change the number inside to be float
    double number11 {102400023.0};
    std::cout << "Number 8 : " << number8 << std::endl;
    std::cout << "Number 9 : " << number9 << std::endl;
    std::cout << "Number 10 : " << number10 << std::endl;
    std::cout << "Number 11 : " << number11 << std::endl;
    return 0;
}
