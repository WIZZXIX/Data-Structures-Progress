#include <iostream>
#include <string>

// A user-defined struct
struct Person {
    int age;         // 4 bytes
    double height;   // 8 bytes
};

int main() {
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    
    // Pointer size depends on the system's architecture (4 on 32-bit, 8 on 64-bit)
    std::cout << "Size of int*: " << sizeof(int*) << " bytes" << std::endl; 
    
    // Size of a user-defined type
    std::cout << "Size of Person struct: " << sizeof(Person) << " bytes" << std::endl;

    return 0;
}