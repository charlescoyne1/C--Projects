#include <iostream>
#include <string>

int main()
{
    std::string filename = "/CSC450_CT5_mod5.txt";
    std::string reversedFile = "/CSC450_CT5_mod5_reversed.txt";
    std::string userInput;

    // Get user input
    std::cout << "Enter text to input to the file. (Will be appended to any existing text): ";
    std::getline(std::cin, userInput);

    return 0;
}