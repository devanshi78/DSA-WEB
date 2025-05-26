#include<iostream>
using namespace std;

class Demo{
    public:
        int num = 21;

        void show(){
            cout<<"1. NUM is: "<<num<<endl;
        }
};

class Demo2 : public Demo{
    public:
        void print(){
            cout<<"2. NUM is: "<<num<<endl;
        }
};

int main(){

    Demo2 demo1;

    cout<<"3. Num is: "<<demo1.num<<endl;

    demo1.show();
    demo1.print();

    return 0;

}