#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class Stack{
    public:
        Node* Head;

    Stack(){
        this->Head = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(this->Head = NULL){
            this->Head = newNode;
        }
        else
        {
            newNode->next = this->Head;
            this->Head = newNode;
            cout<<data<<"Pushed to stack."<<endl;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is Empty."<<endl;
            return;
        }
        Node* ptr = this->Head;
        this->Head = this->Head->next;
    }

    void peek(){
        if(isEmpty()){
            cout<<"stack is empty."<<endl;
            return -1;
        }
        return Head->data;
    }

    bool isFull(){}
    bool isEmpty(){}
    int size(){}
    void display(){}
};

int main(){

    return;

}