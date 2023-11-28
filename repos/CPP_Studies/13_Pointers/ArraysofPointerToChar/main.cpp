#include <iostream>
#include <ctime>

int main()
{

    std::srand(std::time(0));

    // Storing predictions from Fortune Teller Baba
    /* METHOD 1
    char prediction0[] {"a lot of animals running in the backyard!"};
    char prediction1[] {"a lot of empty soda cans on your work table!"};
    char prediction2[] {"Bears will fall in your house"};
    char prediction3[] {"9000 bees attack"};
    char prediction4[] {"Happy fun time"};
    */

   /* METHOD 2
    char predictions[][90]{
        "a lot of animals running in the backyard!",
        "a lot of empty soda cans on your work table!",
        "Bears will fall in your house",
        "9000 bees attack",
        "Happy fun time",
        "...nothing...",
        "Jump to the right!!"  
    };
    */

    const char *predictions[] {
        "a lot of animals running in the backyard!",
        "a lot of empty soda cans on your work table!",
        "Bears will fall in your house",
        "9000 bees attack",
        "Happy fun time",
        "...nothing...",
        "Jump to the right!!"  
    };


   const int SIZE_PREDICTIONS = std::size(predictions);

    bool end{false};

    const int max_length{15};
    char name[max_length]{};

    std::cout << "What's your name dear?" << std::endl;

    std::cin.getline(name, max_length); // Get input with spaces

    while (!end)
    {
        std::cout << "Oh dear..." << name << ", I see ";
        size_t rand_num = static_cast<size_t>((std::rand() % SIZE_PREDICTIONS));

        std::cout << predictions[rand_num] << std::endl;
        /*
        switch (rand_num) // Fortune based on [0-4]
        {
        case 0:
            std::cout << prediction0 << std::endl;
            break;

        case 1:
            std::cout << prediction1 << std::endl;
            break;

        case 2:
            std::cout << prediction2 << std::endl;
            break;

        case 3:
            std::cout << prediction3 << std::endl;
            break;

        case 4:
            std::cout << prediction4 << std::endl;
            break;

        default:
            std::cout << "I see nothing..." << name << std::endl;
            break;
        }
        */

        std::cout << "Do you want me to try again? (Y | N): ";
        char go_on;
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << "Goodbye!" << std::endl;

    return 0;
}