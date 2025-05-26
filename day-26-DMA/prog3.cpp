#include<iostream>
using namespace std;

class student{
    private:
        string* name;
        int age;
        int size;

    public:
        student(int s){
            size = s;
            name = new string[size];
            cout << "Memory allocated for " << size << " students." << endl;
        }

        ~student(){
            delete[] name;
            cout <<"memory deallocated."<<endl;
        }

        void addstudentAt(int index, string studentName){
            if(index >= 0 && index < size){
                name[index] = studentName;
            }else{
                cout<<"Index out of bounds!"<<endl;
            }
        }

        void printstudentAt(int index){
            if(index >= 0 && index < size){
                cout<<"student at index "<<index<<": "<<name[index]<<endl;
            }else{
                cout<<"Index out of bounds!"<<endl;
            }
        }
};

int main(){

    student stud(10);

    stud.addstudentAt(0,"Devanshi");
    stud.addstudentAt(1,"ABC");

    stud.printstudentAt(0);
    stud.printstudentAt(1);

    return 0;

}
