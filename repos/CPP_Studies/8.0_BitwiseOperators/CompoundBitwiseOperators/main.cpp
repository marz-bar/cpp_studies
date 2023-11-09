#include <iostream>
#include <iomanip>
#include <bitset>

int main(){
    
const int COLUMN_WIDTH{20};

std::cout << std::endl;
std::cout << "Compound bitwise assignment operators" << std::endl;

unsigned char sandbox_var {0b00110100}; // 8 bits : positive numbers only

//Print out initial value
std::cout << "Initial value: " << std::endl;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " <<std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound left shift 2 bits
sandbox_var <<= 2;
std::cout << "Shift left 2 bit positions in place: " << std::endl;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound right shift 4 bits
sandbox_var >>= 4;
std::cout << "Shift right 4 bit positions in place: " << std::endl;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound OR bits
sandbox_var |= 0b00001111;
std::cout << "Compound OR with 0000 0010: " << std::endl;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//Compound AND bits
sandbox_var &= 0b0000'0000;
std::cout << "Compound AND with 0000 0000: " << std::endl;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;

//XOR with 00000011 to turn on the lowest 4 bits again
sandbox_var ^= 0b0000'0011;
std::cout << "Compound XOR with 0000 0011: " << std::endl;
std::cout << std::setw(COLUMN_WIDTH) << "sandbox_var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;
std::cout << std::endl;


return 0;
}