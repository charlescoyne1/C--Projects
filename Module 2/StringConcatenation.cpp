#include <iostream>
#include <string>

int main()
{
    // Variables for string concatenation
    std::string firstString, secondString, combinedString;

    // Main function loop for 3 concatenations
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Enter the first string (" << i + 1 << "/3): ";
        getline(std::cin, firstString); // getline allows use of entire line including spaces

        std::cout << "Enter the second string (" << i + 1 << "/3: ";
        getline(std::cin, secondString);

        combinedString = firstString + secondString;

        // Print the combined string
        std::cout << "The concatenated string is: " << combinedString << std::endl;
    }

    return 0;
}