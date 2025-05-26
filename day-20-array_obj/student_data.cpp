#include<iostream>
using namespace std;

class student{
    int rollno,marks,choice;
    string name;

    public:
    void setstudent(int r, string n, int m){
        rollno = r;
        name = n;
        marks = m;
    }

    void getstudent(){
        cout<<"rollno: "<<rollno<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main()
{
    int n,rollno,marks,choice;
    string name;

    cout<<"enter size of data: ";
    cin>>n;

    student std[n];

    do{

        cout<<endl;
        cout<<"\nstudent data\n"<<endl;
        cout<<"----------------------------\n"<<endl;
        cout<<"press 1 for enter student data"<<endl;
        cout<<"press 2 for view student data"<<endl;
        cout<<"press 3 for update student data"<<endl;
        cout<<"press 4 for delete student data"<<endl;
        cout<<"press 0 for exit"<<endl;
        cout<<"enter your choice: ";
        cin>>choice;
        
        cout<<endl;

        switch(choice){
            case 1:
                for(int i = 0; i < n; i++)
                {
                    cout<<"Data store id ["<<i<<"]"<<endl;
                    cout<<"enter rollno: ";
                    cin>>rollno;
                    cout<<"enter name: ";
                    cin>>name;
                    cout<<"enter your marks: ";
                    cin>>marks;
                    std[i].setstudent(rollno,name,marks);
                    cout<<endl;
                }
                break;
            case 2:
                for(int i = 0; i < n; i++)
                {
                    cout<<"Data store id ["<<i<<"]"<<endl;
                    std[i].getstudent();

                    cout<<endl;
                }
                break;
            case 3:
                int updateID;

                cout<<"enter data id to update (0 to "<<n-1<<"): ";
                cin>>updateID;

                if(updateID >= 0 && updateID < n)
                {
                    cout<<"enter new rollno: ";
                    cin>>rollno;
                    cout<<"enter name: ";
                    cin>>name;
                    cout<<"enter marks: ";
                    cin>>marks;
                    std[updateID].setstudent(rollno,name,marks);
                    cout<<"student data updated.";
                }
                else{
                    cout<<"Invalid ID!";
                }
                break;
            case 4:
                int deleteID;
                
                cout<<"enter data id to delete: ";
                cin>>deleteID;

                if(deleteID >= 0 && deleteID < n){
                    std[deleteID].setstudent(0, "Deleted", 0);
                    cout<<"Student data deleted.";
                }else{
                    cout<<"Invalid ID!";
                }

                break;
            case 0:
                break;
            default:
                cout<<"wrong input!!!";
        }

    }while(choice != 0);

    return 0;
}