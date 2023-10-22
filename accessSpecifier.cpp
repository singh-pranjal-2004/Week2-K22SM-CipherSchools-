#include <iostream>

class MyClass {
public:
    // Public members can be accessed from anywhere.
    int publicVar;

    void publicFunction() {
        std::cout << "This is a public function." << std::endl;
    }

private:
    // Private members are only accessible within the class.
    int privateVar;

    void privateFunction() {
        std::cout << "This is a private function." << std::endl;
    }

protected:
    // Protected members are accessible within the class and derived classes.
    int protectedVar;

    void protectedFunction() {
        std::cout << "This is a protected function." << std::endl;
    }
};

int main() {
    MyClass obj;
    
    // Access public members
    obj.publicVar = 42;
    obj.publicFunction();

    // Private members and functions are not accessible outside the class.
    // obj.privateVar = 10;  // Error: privateVar is private.
    // obj.privateFunction();  // Error: privateFunction is private.

    // Protected members and functions are not accessible outside the class.
    // obj.protectedVar = 20;  // Error: protectedVar is protected.
    // obj.protectedFunction();  // Error: protectedFunction is protected.

    return 0;
}
