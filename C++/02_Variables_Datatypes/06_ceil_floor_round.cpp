#include <iostream> 
#include <cmath> 
using namespace std; 

int main() {
    double value = 91.6667;

    cout << "Original value: " << value << endl; 
    cout << "Ceiling (ceil) value: " << ceil(value) << endl; //Rounds Up value
    cout << "Floor (floor) value: " << floor(value) << endl; //Rounds Down value
    cout << "Round (round) value: " << round(value) << endl; //Rounds to nearest integer value

    return 0; 
}