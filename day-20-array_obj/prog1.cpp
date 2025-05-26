#include<iostream>
using namespace std;

class student{
    int rollno;
    string name;

    public:
    void setstudent(int r, string ne){
        rollno = r;
        name = ne;
    }

    void getstudent(){
        cout<<"rollno: "<<rollno<<endl;
        cout<<"name: "<<name<<endl;
    }
};

int main()
{
    int n,rollno;
    string name;

    cout<<"enter size of your data: ";
    cin>>n;

    student std[n];

    for(int i = 0; i < n; i++){

        cout<<endl;
        cout<<"Data store id ["<<i<<"]"<<endl;

        cout<<"enter rollno: ";
        cin>>rollno;

        cout<<"enter name: ";
        cin>>name;

        std[i].setstudent(rollno,name);

        cout<<endl;
    }

    for(int i = 0; i < n; i++){
        std[i].getstudent();
        cout<<endl;
    }

    return 0;
}