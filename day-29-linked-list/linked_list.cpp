#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

int main(){

    Node *HEAD = NULL;
    
    HEAD = new Node();
    HEAD->data = 25;
    HEAD->next = NULL;

    
    Node *n2 = new Node();
    n2->data = 30;
    n2->next = NULL;
    HEAD->next = n2;

    Node *n3 = new Node();
    n3->data = 35;
    n3->next = NULL;
    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 40;
    n4->next = NULL;
    n3->next = n4;

    Node *n5 = new Node();
    n5->data = 45;
    n5->next = NULL;
    n4->next = n5;

    Node *n6 = new Node();
    n6->data = 50;
    n6->next = NULL;
    n5->next = n6;

    Node *n7 = new Node();
    n7->data = 55;
    n7->next = NULL;
    n6->next = n7;

    cout<<HEAD<<" - "<<HEAD->data<<" - "<<HEAD->next<<endl;
    cout<<HEAD->next<<" - "<<n2->data<<" - "<<n2->next<<endl;
    cout<<n2->next<<" - "<<n3->data<<" - "<<n3->next<<endl;
    cout<<n3->next<<" - "<<n4->data<<" - "<<n4->next<<endl;
    cout<<n4->next<<" - "<<n5->data<<" - "<<n5->next<<endl;
    cout<<n5->next<<" - "<<n6->data<<" - "<<n6->next<<endl;
    cout<<n6->next<<" - "<<n7->data<<" - "<<n7->next<<endl;

    return 0;

}