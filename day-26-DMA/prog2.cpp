#include<iostream>
using namespace std;

class Demo{
    public:
        int *arr;
    public:
        Demo(int size){
            this->arr = new int[size];
            cout<<"memory allocated."<<endl;
        }
        ~Demo(){
            delete[] arr;
            cout<<"memory deallocated."<<endl;
        }
        void addElementAt(int index,int element){
            arr[index] = element;
        }
        void printvalueAt(int index){
            cout<<"Element of arr["<<index<<"]:"<<arr[index]<<endl;
        }

};

int main(){
    Demo obj(10);

    obj.addElementAt(0,10);
    obj.addElementAt(1,11);
    obj.addElementAt(2,12);

    obj.printvalueAt(0);
    obj.printvalueAt(1);
    obj.printvalueAt(2);

    return 0;

}