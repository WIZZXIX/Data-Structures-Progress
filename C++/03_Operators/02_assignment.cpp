#include <iostream> 
using namespace std; 
 
int main() {
    int score = 100; // = is simple assignment operator 

    cout << "Original score: " << score << endl;

    score += 50; // += is shorthand for score = score + 50;
    cout << "Updated score: " << score << endl;

    score -= 50; // -= is shorthand for score = score - 50;
    cout << "Update score: " << score << endl; 

    score *= 2; // *= is shorthand for score = score * 2;
    cout << "Updated score: " << score << endl; 

    score /= 2; // /= is shorthand for score = score / 2;
    cout << "Updated score: " << score << endl; 

    return 0; 
}