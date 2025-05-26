#include<iostream>
using namespace std;

int main(){

    string name;
    int age;
    string address;
    long long int contact;

    cout << "enter your name: ";
    cin >> name;

    cout << "enter your age: ";
    cin >> age;

    cout << "enter your address: ";
    cin >> address;

    cout << "enter your contact no.: ";
    cin >> contact;

    cout << "\nuser details\n";
    cout << "~user name: " <<name<<endl;
    cout << "user age: " <<age<<endl;
    cout << "user address: " <<address<<endl;
    cout << "user contact no: " <<contact<<endl;

    return 0;

}