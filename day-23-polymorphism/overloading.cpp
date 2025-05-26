#include<iostream>
using namespace std;

class operation{
    public:
        void perform(int a, int b){
            cout<<"sum of a and b is: "<<a+b;
        }

        void perform(float a, float b){
            cout<<"division of a and b is: "<<a/b;
        }
};

int main(){

    operation obj;
    float a=15,b=3;
    obj.perform(a,b);
    
    return 0;

}