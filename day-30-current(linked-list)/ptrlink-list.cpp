#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main(){

    Node *Head = NULL;
    Head = new Node();
    Head->data = 10;
    Head->next = NULL;

    Node *current = NULL;
    current = new Node();
    current->data = 20;
    current->next = NULL;
    Head->next = current;

    current = new Node();
    current->data = 30;
    current->next = NULL;
    Head->next->next = current;

    Node *ptr = NULL;
    ptr = Head;

    cout<<"Linked List : ";
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }

    return 0;

}