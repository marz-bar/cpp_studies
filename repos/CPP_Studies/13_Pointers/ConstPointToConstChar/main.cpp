#include <iostream>

int main(){
    
    //Array of const pointer to const char
    //Character pointer array.
    const char *students [] 
    {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    //Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students: " << std::endl;
    for(const char *student: students)
    {
        std::cout << student << std::endl;
    }
    std::cout << std::endl;
    
    //Can't modify a single character in string literal
    //Trying to change Daniel to Baniel for example will fail
    //D is a const char.
    // *students[0] = 'B';

    //Can swap pointers though
    //Can swap for new student.
    const char *new_student {"Jack Phillips"};
    students[0] = new_student;

    std::cout << std::endl;
    std::cout << "Printing out the students: " << std::endl;
    for(const char *student: students)
    {
        std::cout << student << std::endl;
    }
    std::cout << std::endl;
}