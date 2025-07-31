#include <iostream>
using namespace std; 
//data types are used to define the type of data a variable can hold. 
//There are three main categories: Primitive, Derived and User-Defined. 

//1) Primitive Data Types: 
//These are the fundamental data types built into the language. They are also known as basic data types. 

//Integer (int): Used to store whole numbers without any decimal points. 
int age = 25;

//Floating-Point (float, double): Used to store the decimal numbers. double is more precise than float. 
float price = 19.99; //Less precision 
double pi = 3.1415926535; //More precision

//Chracter (char) : Used to store a single character, like a letter or a symbol. The character is enclosed in single quotes. 
char grade = 'A';

//Boolean (bool) : Represents logical values and can only be true or false. 
bool isLoggedIn = true; 

//Void (void) : A special type that means "no type" or "no value". It's primarily used for the functions that do not return any value. 
void printMessage () {
    //This function doesn't return anything
}


//2) Derived Data Types:
//These data types are derived from the primitive data types. 

//Array: A collection of elements of the same data type stored in contiguous memory locations.
int scores [5] = {92, 78, 95, 88, 76};

//Pointer: A special variable that stores the memory address of another variable. 
int number = 10; 
int* ptr = &number; //'ptr' now holds the memory address of 'number'

//Function: A block of code that performs a special operation. Functions can return values and take arguments.
int add (int a, int b) {
    return a + b;
}

//3) User-Defined Data Types: 
//We can create our own data types using the following keywords. 

//Structure (struct) : A way to group several related variable of different data types into one place. 
struct Person {
    std::string name; 
    int age; 
    float salary; 
};

// Person p1; 
// p1.name = "Suchit"; 
// p1.age = 21; 

//Class (class) : The core of OOP in C++. It's a blueprint for creating objects.
class Car {
public: //Access specifier
    std::string brand;
    int year; 

    void honk() {
        cout << "Honk Honk!" << endl;
    }
}; 

// Car myCar; 
// myCar.brand = "Toyota";
// myCar.year = 2015;

