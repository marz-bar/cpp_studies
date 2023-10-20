#include <iostream>
#include <cstdlib>
#include <time.h>


int main(){



srand(time(0));

int arr [10];
int len {10};
int n = sizeof(arr) / sizeof(arr[0]);

int target = (rand() % 20) + 1;

for(size_t i{0}; i < len  ; i++)
{
arr[i] = (rand() % 20) + 1;
}

for(int i : arr)
{
std::cout << i << std::endl;
}


/*
for(int i : arr){
std::cout << i << std::endl;
}



std::cout << "Starting search..." << std::endl;
std::cout << "Target is: " << target << std::endl;

for(int i = 0; i < len; i++)
{
 if(arr[i] == target)
 {
  std::cout << "Target found at index: " << i << std::endl;
  break;
 }
 else  
 {
  std::cout << "Target missing. Currently on index: " << i << "|| Current index value is: " << arr[i] << std::endl; 
 }
 if(!(arr[i] == target) && i == (len-1)){
    std::cout << "Target was never found." << std::endl;
 }
}
*/
return 0;
}