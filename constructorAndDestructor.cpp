#include <iostream>

class MyClass {
public:
    // Constructor with parameters
    MyClass(int value) {
        this->value = value;
        std::cout << "Constructor called. Value is set to: " << value << std::endl;
    }

    // Default constructor (constructor with no parameters)
    MyClass() {
        this->value = 0;
        std::cout << "Default constructor called. Value is set to 0." << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called. Cleaning up. Value was: " << value << std::endl;
    }

    void printValue() {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    MyClass obj1(42); // Calls the parameterized constructor
    MyClass obj2;     // Calls the default constructor

    obj1.printValue();
    obj2.printValue();

    return 0; // Destructors will be automatically called when objects go out of scope.
}
