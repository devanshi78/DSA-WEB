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
    Head->data = 1;
    Head->next = NULL;

    Node *n2 = new Node();
    n2->data = 11;
    n2->next = NULL;
    Head->next = n2;

    cout<<Head<<" - "<<Head->data<<" - "<<Head->next<<endl;
    cout<<Head->next<<" - "<<n2->data<<" - "<<n2->next<<endl;

    return 0;

}