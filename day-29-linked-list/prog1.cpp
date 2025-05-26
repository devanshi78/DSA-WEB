#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main(){

    Node *head = NULL;
    head = new Node;
    head->data = 1;
    head->next = NULL;

    Node *n2 = new Node();
    n2->data = 2;
    n2->next = NULL;
    head->next = n2;

    Node *n3 = new Node();
    n3->data = 3;
    n3->next = NULL;
    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 4;
    n4->next = NULL;
    n3->next = n4;

    Node *n5 = new Node();
    n5->data = 5;
    n5->next = NULL;
    n4->next = n5;

    Node *n6 = new Node();
    n6->data = 6;
    n6->next = NULL;
    n5->next = n6;

    Node *n7 = new Node();
    n7->data = 7;
    n7->next = NULL;
    n6->next = n7;

    Node *n8 = new Node();
    n8->data = 8;
    n8->next = NULL;
    n7->next = n8;

    Node *n9 = new Node();
    n9->data = 9;
    n9->next = NULL;
    n8->next = n9;

    Node *n10 = new Node();
    n10->data = 10;
    n10->next = NULL;
    n9->next = n10;

    cout<<head<<" - "<<head->data<<" - "<<head->next<<endl;
    cout<<head->next<<" - "<<n2->data<<" - "<<n2->next<<endl;
    cout<<n2->next<<" - "<<n3->data<<" - "<<n3->next<<endl;
    cout<<n3->next<<" - "<<n4->data<<" - "<<n4->next<<endl;
    cout<<n4->next<<" - "<<n5->data<<" - "<<n5->next<<endl;
    cout<<n5->next<<" - "<<n6->data<<" - "<<n6->next<<endl;
    cout<<n6->next<<" - "<<n7->data<<" - "<<n7->next<<endl;
    cout<<n7->next<<" - "<<n8->data<<" - "<<n8->next<<endl;
    cout<<n8->next<<" - "<<n9->data<<" - "<<n9->next<<endl;
    cout<<n9->next<<" - "<<n10->data<<" - "<<n10->next<<endl;

    return 0;

}