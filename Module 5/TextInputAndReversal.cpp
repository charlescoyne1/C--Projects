#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

void appendToText(const std::string &filename, const std::string &input) 
{
    std::ofstream file;
    // Open the txt file to append on
    file.open(filename, std::ios::app);
    if(file.is_open()) 
    {
        file << input << std::endl;
        file.close();
        std::cout << "Input suuccessfully appended to txt file " << filename << std::endl;
    }
    else
    {
        std::cerr << "Unable to open file, check to see if file is not already opened, then close and rerun." << std::endl;
    }
}

int main()
{
    std::string filename = "/CSC450_CT5_mod5.txt";
    std::string reversedFile = "/CSC450_CT5_mod5_reversed.txt";
    std::string userInput;

    // Get user input
    std::cout << "Enter text to input to the file. (Will be appended to any existing text): ";
    std::getline(std::cin, userInput);

    // Append the input to the file
    appendToText(filename, userInput);

    

    return 0;
}