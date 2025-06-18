#include<iostream>
using namespace std;

class stack
{   public:
    int top = -1;
    int a[20];

    void push(int element){
        a[++top] = element;
    }

    int pop(){
        return a[top--];
    }

    int peek(){
        return a[top];
    }

    void display(){
        cout<<a[top]<<endl;
        cout<<a[top-1]<<endl;
        cout<<a[top-2]<<endl;
    }

};

int main()
{
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout<<"peek element : "<<s.peek()<<endl;

    s.display();

    cout<<"pop element : "<<s.pop()<<endl;

    s.display();

    return 0;

}