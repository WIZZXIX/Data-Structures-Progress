#include <iostream>
using namespace std; 

// int main() {
//     int n;
//     cin >> n; 
//     cout << "Your number is: " << n << endl; 
//     return 0; 
// }

int main() {
    int physics, chemistry, math;
    cout << "Enter your physics score: "; 
    cin >> physics; 
    cout << "\nEnter your chemistry score: "; 
    cin >> chemistry; 
    cout << "\nEnter your Mathematics score: "; 
    cin >> math; 

    float average = (physics + chemistry + math) / 3.0;
    cout << "\nYour average score is: " << average << endl;
    return 0; 
}