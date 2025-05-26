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
    Node *ptr = NULL;

    int n,value;

    cout<<"How Many Number Do You Want To Enter? : ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"Enter Number "<<i+1<<" : ";
        cin>>value;

        Node *current = new Node();
        current->data = value;
        current->next = NULL;

        if(Head == NULL)
        {
            Head = current;
        }
        else
        {
            ptr->next = current;
        }

        ptr = current;
    }

    cout<<"Linked List : ";
    ptr = Head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;

    return 0;

}