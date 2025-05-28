#include<iostream>
using namespace std;

class Node{
    public:
        string data;
        Node *next;
};

int main()
{
    Node *Head = NULL;
    Node *ptr = NULL;

    int n;
    string value;

    cout<<"How many student do you want to insert : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Enter Number "<<i+1<<" : ";
        cin>>value;

        Node *current = new Node();
        current->data = value;
        current->next = NULL;

        if(Head == NULL){
            Head = current;
        }
        else
        {
            ptr->next = current;
        }

        ptr = current;
    }

    cout<<"Student List : ";
    ptr = Head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    };

    return 0;

}