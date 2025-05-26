#include<iostream>
using namespace std;

class Employee{
    public:
        virtual void getEmployee() = 0;
        virtual void getEmployeesalary() = 0;
};

class Manager : public Employee{
    public: 
        void getEmployee(){
            cout<<"From Employee"<<endl;
        }
        void getEmployeesalary(){
            cout<<"From salary"<<endl;
        }
        void getManager(){
            cout<<"From manager"<<endl;
        }

};

int main(){

    Manager emp;

    emp.getEmployee();
    emp.getEmployeesalary();
    emp.getManager();

    return 0;

}