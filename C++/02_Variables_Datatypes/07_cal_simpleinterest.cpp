#include <iostream>
using namespace std; 

int main() {
    float p, r,t; // declare variables 

    cout << "Principal value: "; 
    cin >> p; // input principal value
    cout << "Rate of interest: ";
    cin >> r; // input rate of interest
    cout << "Time in years: ";
    cin >> t; // input time in years

    float si = (p * r * t) / 100; // calculate simple interest

    cout << "Simple Interest: " << si << endl; // display simple interest

    return 0; 
}