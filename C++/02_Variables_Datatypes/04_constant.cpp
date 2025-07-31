//const: const variable is a variable that is declared with the const keyword. It cannot be changed once it is declared.

#include <iostream> 
using namespace std; 

int main() {
    const double PI = 3.14; 
    // PI = 4.0 ; // This will cause a compilation error.

    double radius = 5.0; 
    double area = PI * radius * radius; 

    cout << "The area of the circle is " << area << endl; 

    return 0; 
}