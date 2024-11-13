//Task2

#include <iostream>
#include <stdexcept>

// Base exception class
class Exception {};

// Derived exception classes
class DivisionByZero : public Exception {};
class WrongValue : public Exception {};
class UnreasonableError : public Exception {};

int main() {
    try {
        throw DivisionByZero(); // Throw an exception to test handling
    } catch (const DivisionByZero &) { // Catch DivisionByZero exception
        std::cout << "DivisionByZero exception handled." << std::endl;
    } catch (const WrongValue &) { // Catch WrongValue exception
        std::cout << "WrongValue exception handled." << std::endl;
    } catch (const Exception &) { // Catch base Exception
        std::cout << "Base Exception handled." << std::endl;
    }

    return 0;
}
