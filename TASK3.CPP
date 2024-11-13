//Task3

#include <iostream>
#include <stdexcept>
#include <exception>

// Function that throws a runtime error
void innerFunction() {
    throw std::runtime_error("Division by zero in inner function");
}

// Function that calls innerFunction and rethrows with additional context
void outerFunction() {
    try {
        innerFunction(); // Call inner function
    } catch (const std::runtime_error &e) {
        std::throw_with_nested(std::logic_error("Invalid operation in outer function")); // Rethrow with nested logic error
    }
}

int main() {
    try {
        outerFunction(); // Call outer function and catch any exception
    } catch (const std::exception &e) {
        std::cerr << "Caught: " << e.what() << std::endl; // Print outer exception message
        try {
            std::rethrow_if_nested(e); // Check for nested exception
        } catch (const std::exception &nested) {
            std::cerr << "Nested exception: " << nested.what() << std::endl; // Print nested exception message
        }
    }

    return 0;
}
















