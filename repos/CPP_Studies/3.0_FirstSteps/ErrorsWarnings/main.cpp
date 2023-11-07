#include <iostream>

int main(){
   //Compile time error - remove semi-colon on line 5 for example
   std::cout << "Hello World!" << std::endl;
   
   //Run time error
   int value = 7/0;
   std::cout << "value : " << value << std::endl;
   return 0;
}