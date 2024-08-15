#include <iostream>
#include <string>

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
    std::cout << "Name:" << firstName << " " << lastName << std::endl;
    std::cout << "Street Address:" << streetAddress << std::endl;
    std::cout << "City:" << city << std::endl;
    std::cout << "Zip Code:" << zipCode << std::endl;
}