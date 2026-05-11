// Secure Coding in C++
// Exercise 01_05 xxx
// Fixing unsafe expressions, by Eduardo Corpeño

#include <iostream>

#define SQUARE(x) ((x) * (x))

int main(){
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    int result = SQUARE(input + 1); // expands to: (input + 1) * (input + 1)

    std::cout << "Result: " << result << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
