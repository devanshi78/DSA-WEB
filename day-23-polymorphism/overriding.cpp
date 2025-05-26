#include<iostream>
using namespace std;

class employee{
    public:
        void printData(){
            cout<<"employee data.";
        }
};

class manager{
    public:
        void printData(){
            cout<<"manager data.";
        }
};

int main(){

    manager m;

    m.printData();

    return 0;

}