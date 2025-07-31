#include <iostream>
#include <typeinfo>
using namespace std; 

int main() {
    int num = 50; 
    double double_num = num; 
    float float_num = num;

    cout << "The value of num is: " << num << endl;
    cout << "The value of double is: " << double_num << endl;
    cout << "The value of float is: " << float_num << endl; 

    cout << "The type of num is: " << typeid(num).name() << endl;
    cout << "The type of double is: " << typeid(double_num).name() << endl; 
    cout << "The type of float is: " << typeid(float_num).name() << endl;
    
    return 0; 
}