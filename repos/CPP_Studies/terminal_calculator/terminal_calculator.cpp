#include <iostream>


int main(){

 char operation; // +, -, *, /
 double operand1, operand2;
 bool end{false};
 
 std::cout << "Welcome to Console Calculator!" << std::endl;
 
   while((end == false))
   {
      std::cout << "------------------------------------------------" << std::endl;
      std::cout << "What operation do you want help with? " << std::endl;
      std::cout << "+,-,*, and / are supported. Please choose one and type below" << std::endl;
      std::cout << "Your operation: ";
      std::cin >> operation;
     
      std::cout << std::endl;
      std::cout << "Please type in your two operands seperated by a space and hit enter: ";
      std::cin >> operand1 >> operand2;
      std::cout << std::endl;
      
      switch (operation)
      {
      case '+':
         std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
         break;
      
      case '-':
         std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
         break;
      
      case '*':
         std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
         break;
      
      case '/':
         std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
         break;
     
      default:
         std::cout << "Invalid operation enter.." << std::endl;
         break;
      }
     
      std::cout << "Continue? (Y | N) : ";
     
      char go_on;
      std::cin >> go_on;
     
      if((go_on == 'Y') || (go_on == 'y'))
      {
         end = false;
      } 
      else 
      {
        end = true;
      }
   
   }
 
 std::cout << "Calculations completed. Goodbye." << std::endl;
return 0;
}