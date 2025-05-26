#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main()
{
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

    cout<<Head<<" - "<<Head->data<<" - "<<Head->next<<endl;
    cout<<Head->next<<" - "<<Head->next->data<<" - "<<Head->next->next<<endl;
    cout<<Head->next->next<<" - "<<Head->next->next->data<<" - "<<Head->next->next->next<<endl;

    return 0;

}