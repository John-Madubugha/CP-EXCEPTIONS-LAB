//Task1

#include <iostream>
#include <stdexcept>

// Function to perform division
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Division by zero error."); // Throw error if denominator is zero
    }
    return static_cast<double>(numerator) / denominator; // Return result if valid
}

int main() {
    int numerator, denominator;
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    try {
        double result = divide(numerator, denominator); // Attempt division
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error &e) { // Catch division by zero error
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
