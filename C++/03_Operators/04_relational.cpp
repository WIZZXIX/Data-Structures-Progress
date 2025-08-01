#include <iostream> 
using namespace std; 

int main() {
    int age = 20;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    cout << "Is age exactly 20? " << (age == 20) << endl; // Prints 1 (true)

    return 0;
// ==	Equal to	a == b	true if a and b are equal
// !=	Not equal to	a != b	true if a and b are not equal
// >	Greater than	a > b	true if a is greater than b
// <	Less than	a < b	true if a is less than b
// >=	Greater than or equal to	a >= b	true if a is greater than or equal to b
// <=	Less than or equal to	a <= b	true if a is less than or equal to b
}