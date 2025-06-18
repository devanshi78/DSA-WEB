#include<iostream>
#include<vector>
using namespace std;

class stack{
    private:
        vector<int> stack;

    public:

        void push(int data){
            stack.push_back(data);
            cout<<data<<" pushed to stack."<<endl;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack is Empty."<<endl;
                return;
            }
            cout<<stack.back()<<" popped from stack."<<endl;
            stack.pop_back();
        }

        int peek(){
            if (isEmpty()) {
                cout << "Stack is empty." << endl;
                return -1;
            }   
            return stack.back();
        }

        int size(){
            return stack.size();
        }

        void display(){
            if(isEmpty()){
                cout << "Stack is empty." << endl;
                return;
            }
            cout<<"Stack : ";
            for(int i = stack.size() - 1; i >= 0; i++)
            {
                cout<<stack[i]<<" ";
            }
            cout<<endl;
        }

        bool isEmpty(){
            return stack.empty();
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

    cout<<"top element : "<<s.peek()<<endl;

    s.pop();
    s.display();

    cout<<"size element : "<<s.size()<<endl;

    s.display();

    return 0;
}