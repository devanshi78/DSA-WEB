#include<iostream>
using namespace std;

int main(){

    int rollno,english,gujrati,drawing,total;
    string s_name;
    double avg;

    cout<<"enter roll no: ";
    cin>>rollno;
    cout<<"enter your name: ";
    cin>>s_name;
    cout<<"enter english marks: ";
    cin>>english;
    cout<<"enter gujrati marks: ";
    cin>>gujrati;
    cout<<"enter drawing marks: ";
    cin>>drawing;

    total = english+gujrati+drawing;
    avg = total/3;

    cout<<"\nstudent marksheet\n";
    cout<<"your roll no: "<<rollno<<endl;
    cout<<"student name: "<<s_name<<endl;
    cout<<"english: "<<english<<endl;
    cout<<"gujrati: "<<gujrati<<endl;
    cout<<"drawing: "<<drawing<<endl;
    cout<<"total is: "<<total<<endl;
    cout<<"your avg is: "<<avg; cout<<"%"<<endl;

    if(english<=100 && gujrati<=100 && drawing<=100)
    {
        if(english>=35 && gujrati>=35 && drawing>=35)
        {
            cout<<"Pass"<<endl;
            if(avg>=80)
            {
                cout<<"Grade A";
            }
            else if(avg>=60)
            {
                cout<<"Grade B";
            }
            else if(avg>=50)
            {
                cout<<"Grade C";
            }
        }
        else
        {
            cout<<"Fail"<<endl;
        }
    }
    else
    {
        cout<<"enter valid marks.1 to 100";
    }

    return 0;

}

//rollno, name, sub1, sub2, sub3, total, avg, grade.