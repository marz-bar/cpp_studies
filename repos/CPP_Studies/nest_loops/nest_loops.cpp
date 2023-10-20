#include <iostream>
#include <iomanip>

int main(){

std::cout << std::endl;
std::cout << "--------------Nested For Loop---------------------" << std::endl;
std::cout << std::endl;
 
 //Nested For Loop
 int forLoopRow {}, forLoopCol{};

 for(forLoopRow; forLoopRow < 20; ++forLoopRow)
 {
    for(forLoopCol; forLoopCol < 5; ++forLoopCol)
    {
     std::cout << "[" << forLoopRow << "," << forLoopCol << "]" << " ";
    }
  std::cout << std::endl;
  forLoopCol = 0;
 }
 
std::cout << std::endl;
std::cout << "----------------Nest While Loop-------------------" << std::endl;
std::cout << std::endl;

 //Nest While Loop
 int whileLoopRow{},whileLoopCol{};
 while(whileLoopRow < 20){
  while(whileLoopCol < 5){
    std::cout << "[" << whileLoopRow << "," << whileLoopCol << "]" ;
    ++whileLoopCol;
  }
 std::cout << std::endl;
 whileLoopCol = 0;
 ++whileLoopRow;
 }


std::cout << std::endl;
std::cout << "---------------Nested Do While Loop--------------------" << std::endl;
std::cout << std::endl;

int doWhileLoopRow, doWhileLoopCol;

do
{
    do
    {
        std::cout << "[" << doWhileLoopRow << "," << doWhileLoopCol << "]" << " ";
        ++doWhileLoopCol;
    } while (doWhileLoopCol < 5);
    std::cout << std::endl;
    doWhileLoopCol = 0;
    ++doWhileLoopRow;
} while (doWhileLoopRow < 20);


 return 0;
}