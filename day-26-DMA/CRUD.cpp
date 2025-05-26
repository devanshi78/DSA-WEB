#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        string name;
        float marks;
    
    public:
        void setData(int id, string name, float marks){
            this->id = id;
            this->name = name;
            this->marks = marks;
        }

        void display(){
            cout<<"ID: "<<this->id<<endl;
            cout<<"Name: "<<this->name<<endl;
            cout<<"Marks: "<<this->marks<<endl;
        }

        int getID(){
            return this->id;
        }

        void update(string name, float marks){
            this->name = name;
            this->marks = marks;
        }
};

int main(){

    Student stud[100];

    int size = 0, choice;

    do{
        cout<<endl;
        cout<<"---------- Student Management System ----------"<<endl;
        cout<<"press 1 for Create Student"<<endl;
        cout<<"press 2 for View Student Data"<<endl;
        cout<<"press 3 for Update Student Data"<<endl;
        cout<<"press 4 for Delete Student Data"<<endl;
        cout<<"press 5 for Exit!"<<endl;
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice){
            case 1:{
                if(size >= 100){
                    cout<<"Limit reached. Cannot add more students."<<endl;
                    break;
                }

                int id;
                string name;
                float marks;

                cout<<"Enter ID: ";
                cin>>id;
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter Marks: ";
                cin>>marks;

                stud[size].setData(id, name, marks);
                size++;

                cout<<"student added."<<endl;

                break;
            }
            case 2:{
                if(size == 0){
                    cout<<"No Studenta to display."<<endl;
                    break;
                }

                cout<<endl;
                cout<<"---------- Student List ----------"<<endl;
                for(int i = 0; i < size; i++){
                    stud[i].display();
                }
                break;
            }
            case 3:{
                if(size == 0){
                    cout<<"No Students to update."<<endl;
                    break;
                }
                
                int id;
                cout<<"Enter ID to update: ";
                cin>>id;

                for(int i = 0; i < size; i++){
                    if(stud[i].getID() == id){
                        string newName;
                        float newMarks;

                        cout<<"Enter new name: ";
                        cin>>newName;

                        cout<<"Enter new marks: ";
                        cin>>newMarks;

                        stud[i].update(newName, newMarks);

                        cout<<"student updated.";
                        break;
                    }
                }            
                break;
            }
            case 4:{
                if(size == 0){
                    cout<<"No Students to delete."<<endl;
                    break;
                }

                int id;
                cout << "Enter ID to delete: ";
                cin >> id;

                for(int i = 0; i < size; i++){
                    if(stud[i].getID() == id){
                        for(int j = i; j < size; j++){
                            stud[j] = stud[j + 1];
                        }

                        size--;
                        cout<<"student deleted."<<endl;
                        break;
                    }
                }
                break;
            }
            case 5:{
                cout<<"Exiting program."<<endl;
                break;
            }
            default:
                cout<<"Invalid choice. Please try again.";
        }

    }while(choice != 5);

    return 0;

}