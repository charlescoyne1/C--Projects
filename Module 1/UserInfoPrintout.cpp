#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Variables to store person's info
    std::string firstName;
    std::string lastName;
    std::string streetAddress;
    std::string city;
    std::string zipCode;

    // Assign variables dummy info
    firstName = "Bob";
    lastName = "Barker";
    streetAddress = "7800 Beverly Blvd.";
    city = "Los Angeles";
    zipCode = "90036";

    // Print out info
    std::cout << "Person's Information:" << std::endl;
    std::cout << std::left << std::setw(16) << "Name:" << firstName << " " << lastName << std::endl;
    std::cout << std::left << std::setw(16) << "Street Address:" << streetAddress << std::endl;
    std::cout << std::left << std::setw(16) << "City:" << city << std::endl;
    std::cout << std::left << std::setw(16) << "Zip Code:" << zipCode << std::endl;
}