#include <iostream> 

int main(){
   short short_int {2}; // store 2 bytes
   long long_int {100}; // store 4 or 8 bytes
   long long longlong_int {88}; // store 8 bytes (have huge range of value but also use more storage)

   signed int value1 {-300}; // signed can store int with +,- signs
   signed int value2 {10};
   unsigned int positive_int {10}; // unsigned can only store positive number (get compile error when putting negative number)

   std::cout << "Short int sizeof : " << sizeof(short_int) << std::endl;
   std::cout << "Long int sizeof : " << sizeof(long_int) << std::endl;
   std::cout << "Long Long int sizeof : " << sizeof(longlong_int) << std::endl;
}
