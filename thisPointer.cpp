#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int value) {
        this->value = value; // Using this pointer to distinguish class member from parameter.
    }

    void printValue() {
        std::cout << "Value: " << this->value << std::endl;
    }

    // A member function that compares two objects.
    bool isEqual(MyClass other) {
        return this->value == other.value;
    }
};

int main() {
    MyClass obj1(42);
    MyClass obj2(42);

    obj1.printValue();
    obj2.printValue();

    if (obj1.isEqual(obj2)) {
        std::cout << "obj1 and obj2 have the same value." << std::endl;
    } else {
        std::cout << "obj1 and obj2 have different values." << std::endl;
    }

    return 0;
}
