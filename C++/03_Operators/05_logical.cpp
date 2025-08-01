#include <iostream> 
using namespace std; 

int main() {
    int age = 25;
    bool hasLicense = true;

    //&& Logical and (both should be true)
    // Checks if BOTH conditions are true
    if (age >= 18 && hasLicense) {
        cout << "You are allowed to drive." << endl;
    }

    // || Logical or (at least one should be true)
    // Checks if at least ONE condition is true
    bool isWeekend = true;
    bool isHoliday = false;
    if (isWeekend || isHoliday) {
        cout << "You don't have to work today!" << endl;
    }

    // ! Logical not (negates the condition)
    // Inverts the boolean value
    if (!isHoliday) {
        cout << "It is not a holiday." << endl;
    }

    return 0;
}