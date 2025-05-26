#include<iostream>
using namespace std;

template <typename T>
class Employee{
    private:
        T id;
        string name;
        T salary;

    public:
        void setDetails(T id, string name, T salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        void showDetails(){
            cout<<"ID : "<<this->id<<endl;
            cout<<"Name : "<<this->name<<endl;
            cout<<"Salary : "<<this->salary<<endl;
        }

        T getId(){
            return this->id;
        }

        void updateDetails(string name, T salary){
            this->name = name;
            this->salary = salary;
        }
};

int main()
{
    Employee<int> emp[100];

    int count = 0;
    int choice, id, salary;
    string name;

    do{
        cout<<endl;
        cout<<"------- Employee Management System -------"<<endl;
        cout<<"1 . Add Employee"<<endl;
        cout<<"2 . Show All"<<endl;
        cout<<"3 . Update Employee"<<endl;
        cout<<"4 . Delete Employee"<<endl;
        cout<<"5 . Exit"<<endl;
        cout<<"enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter ID : ";
                cin>>id;
                cout<<"Enter Name : ";
                cin>>name;
                cout<<"Enter Salary : ";
                cin>>salary;
                emp[count].setDetails(id, name, salary);
                count++;
                cout<<"Employee Added Successfully."<<endl;
                cout<<endl;
                break;

            case 2:
                for(int i = 0; i < count; i++){
                    emp[i].showDetails();
                    cout<<"-----------------------"<<endl;
                }
                break;

            case 3:
                cout<<"Enter Id to Update : ";
                cin>>id;
                {
                    bool found = false;
                    for(int i = 0; i < count; i++){
                        if(emp[i].getId() == id){
                            cout<<"Enter New Name : ";
                            cin>>name;
                            cout<<"Enter New Salary : ";
                            cin>>salary;
                            emp[i].updateDetails(name,salary);
                            cout<<"Employee Updated."<<endl;
                            found = true;
                            break;
                        }
                    }
                    if(!found){
                        cout<<"Employee Not Found."<<endl;
                    }
                }
                break;

            case 4:
                cout<<"Enter ID to Delete : ";
                cin>>id;
                {
                    bool found = false;
                    for(int i = 0; i < count; i++){
                        if(emp[i].getId() == id){
                            for(int j = i; j < count - 1; j++){
                                emp[j] = emp[j + 1];
                            }
                            count--;
                            cout<<"Employee Deleted."<<endl;
                            found = true;
                            break;
                        }
                    }
                    if(!found){
                        cout<<"Employee Not Found."<<endl;
                    }
                }
                break;

            case 5:
                cout<<"Exiting....."<<endl;
                break;

            default:
                cout<<"Invalid choice.";
        }


    }while(choice != 5);

    return 0;

}