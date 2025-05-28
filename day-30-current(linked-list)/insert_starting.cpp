#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void insertatbeginnig(Node *&Head, int value){
    Node *n2 = new Node();
    n2->data = value;
    n2->next = Head;
    Head = n2;
};

int main()
{
    Node *Head = NULL;

    insertatbeginnig(Head,30);
    insertatbeginnig(Head,20);
    insertatbeginnig(Head,10);

    Node *current = Head;
    cout<<"Linked List : ";
    while(current != NULL){
        cout<<current->data<<" -> ";
        current = current->next;
    }
    cout<<" NULL "<<endl;

    return 0;

}