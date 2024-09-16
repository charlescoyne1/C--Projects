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
        std::cerr << "Unable to open file, check to see if file already opened, close and rerun." << std::endl;
    }
}

void reverseTextContents(const std::string &inputTxt, const std::string &outputTxt)
{
    std::ifstream file(inputTxt);

    // If file is open, error out
    if (!file.is_open())
    {
        std::cerr << "Unable to open file, check to see if file opened already, close and rerun." << std::endl;
        return;
    }

    // Transpose file contents to string
    std::string contents((std::istreambuf_iterator<char>(file)),
                         (std::istreambuf_iterator<char>()));
    file.close();

    // Reverse the string, contents
    std::reverse(contents.begin(), contents.end());

    // Write the reversed string, contents, to a new txt file
    std::ofstream reversedFile(outputTxt);
    if (reversedFile.is_open())
    {
        reversedFile << contents;
        reversedFile.close();
        std::cout << "Text in file successfully written reversed to " << outputTxt << std::endl;
    }
    else
    {
        std::cerr << "Check if file is open, unable to open txt file " << outputTxt << " for writing." << std::endl;
    }
}

int main()
{
    std::string filename = "CSC450_CT5_mod5.txt";
    std::string reversedFile = "CSC450_CT5_mod5_reversed.txt";
    std::string userInput;

    // Get user input
    std::cout << "Enter text to input to the file. (Will be appended to any existing text): ";
    std::getline(std::cin, userInput);

    // Append the input to the file
    appendToText(filename, userInput);

    // Reverse txt file's contents
    reverseTextContents(filename, reversedFile);

    return 0;
}