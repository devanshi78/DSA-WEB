#include <iostream>
using namespace std;
    
int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;

        if (age >= 25) {
            cout << "You are also eligible to contest in an election." << endl;
        } else {
            cout << "But you are not eligible to contest in an election." << endl;
        }

    } else {
        cout << "You are not eligible to vote or contest in an election." << endl;
    }
    
    return 0;
}