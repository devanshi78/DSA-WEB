#include<iostream>
using namespace std;

class stack{
    public:
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
        cout<<"stack : ";
        for(int i = top; i >= 0; i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    stack s;

    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    s.display();

    cout<<"pop element : "<<s.pop()<<endl;

    cout<<"peek element : "<<s.peek()<<endl;

    s.display();

    return 0;
}