#include<iostream>
using namespace std;

int main(){

    int emp_id;
    string emp_name;
    int emp_salary;

    cout <<"enter your id: ";
    cin >> emp_id;

    cout <<"enter your name: ";
    cin >> emp_name;

    cout <<"enter your salary: ";
    cin >> emp_salary;

    cout <<"\nemployee data\n";
    cout <<"employ id: "<<emp_id<<endl;
    cout <<"employee name: "<<emp_name<<endl;
    cout <<"employee salary: "<<emp_salary;

    return 0;

}