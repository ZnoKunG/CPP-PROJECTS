#include <iostream>

int main(){
   // Addition
   int number1 {3};
   int number2 {7};

   int result = number1 + number2;
   std::cout << "Addition : " << result << std::endl;

   // Subtraction
   result = number2 - number1;
   std::cout << "Substraction : " << result << std::endl;

   result = number1 - number2;
   std::cout << "Substraction : " << result << std::endl;

   // Multiplication
   result = number1 * number2;
   std::cout << "Multiplication : " << result << std::endl;

   // Division
   result = number2 / number1;
   std::cout << "Division : " << result << std::endl;
   // The result only count how many times number1 can fit in the number2 so the remaining is cut off

   // Modulus
   result = number2 % number1;
   std::cout << "Modulus : " << result << std::endl; // 7 % 3 get remainder which is 1

   return 0;
}
