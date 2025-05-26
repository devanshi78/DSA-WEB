#include<iostream>
using namespace std;

class Demo{ 
    public:
        void print(){
            cout<<"hello world!";
        }

};

class Demo2 : public Demo{
    public:
        void print();
};

int main(){

    Demo obj;

    obj.print();

    return 0;

}