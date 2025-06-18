#include<iostream>
using namespace std;

class Stack{
    public:
        int* arr;
        int top;
        int capacity;

    Stack(int capacity){
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->top = -1;
    }

    ~Stack(){
        delete[] arr;
    }

    void push(int element);
    void pop();
    void peek();
    bool isEmpty();
    bool isFull();
    int size();
    void display();
    
};

void Stack::push(int element){
    if(isFull()){
        cout<<"Stack is overflow"<<endl;
    }
    else
    {
        this->top++;
        this->arr[this->top] = element;
    }
}

void Stack::pop(){
    if(isEmpty()){
        cout<<"Stack is underflow/empty"<<endl;
    }
    else
    {
        top--;
    }
}

void Stack::peek(){
    if(isEmpty()){
        cout<<"Stack is underflow/empty."<<endl;
    }
    else
    {
        cout<<"top element : "<<this->arr[top];
    }
}

bool Stack::isEmpty(){
    return top == -1;
}

bool Stack::isFull(){
    return top == capacity-1;
}

int Stack::size(){
    return top+1;
}

void Stack::display(){
    if(isEmpty()){
        cout << "Stack is empty!" << endl;
        return;
    }

    cout<<"stack : ";
        for(int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}

int main(){
    int capacity;
    cout<<"Enter capacity : ";
    cin>>capacity;

    Stack s(capacity);

    int n;
    cout<<"Enter element to push : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements : "<<endl;
    for(int i = 0; i < n; i++)
    {
        int value;
        cin>>value;
        s.push(value);
    }

    s.display();

    cout << "Current size of stack: " << s.size() << endl;

    s.peek();

    return 0;

}