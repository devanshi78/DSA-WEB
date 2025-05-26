#include<iostream>
using namespace std;

class Student{
    int rollno = 10;
    string name = "devanshi";

public: 
    void getStudent(){
        cout<<"roll no is : "<<this->rollno<<endl;
    }
};

int main()
{
    Student std;

    std.getStudent();

    return 0;

}