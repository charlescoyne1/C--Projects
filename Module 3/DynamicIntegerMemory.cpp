#include <iostream>
using namespace std;

int main()
{
    // Int Variables
    int num1, num2, num3;

    // Initial program info prompt
    cout << "This program will take 3 integer inputs then outputs the integer as well as memory pointer value." << endl;

    // Prompt for user inputs
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter third integer: ";
    cin >> num3;

    // Dynamically allocate memory
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Assign the user integer values to the memory locations of the pointers
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display contents of user integers and pointers
    cout << "\nUser inputed variable values:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;

    cout << "Pointer ptr1 is at memory location " << ptr1 << " with the user input value of " << *ptr1 << endl;
    cout << "Pointer ptr2 is at memory location " << ptr2 << " with the user input value of " << *ptr2 << endl;
    cout << "Pointer ptr3 is at memory location " << ptr3 << " with the user input value of " << *ptr3 << endl;

    // Free memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Nullify pointers
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}