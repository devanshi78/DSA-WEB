#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist{
    public:
        Node *Head;
        int size;

    Linkedlist()
    {
        this->Head = NULL;
        this->size = 0;
    }

    void insertatfront(int data){
        Node *newNode = new Node(data);
        newNode->next = this->Head;
        this->Head = newNode;
        this->size++;
    }
    void insertatend(int data){
        Node *newNode = new Node(data);
        Node *ptr = this->Head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    void insertatindex(int index,int data){
        if(index < 0 || index > size)
        {
            cout<<"Invalid Choice"<<endl;
            return;
        }
        if(index == 0)
        {
            insertatfront(data);
            return;
        }

        Node *newNode = new Node(data);
        Node *ptr = this->Head;

        for(int i = 0; i < index - 1; i++){
            ptr = ptr->next;
        }

        newNode->next = ptr->next;
        ptr->next = newNode;
        this->size++;
    }

    void updatelist(){}

    void deletatfront(){}
    void deletatend(){}
    void deletatindex(){}

    int isvalid(){}

    void display(){
        Node *ptr = this->Head;
        cout<<"List : ";
        while(ptr != NULL){
            cout<<ptr->data<<" -> ";
            ptr = ptr->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    Linkedlist list;

    Node *Head = NULL;
    Node *ptr = NULL;

    int choice,element,index;

    do
    {
        cout<<"------------------------"<<endl;
        cout<<"Enter 1 insert at front "<<endl;
        cout<<"Enter 2 insert at end"<<endl;
        cout<<"Enter 3 insert at index"<<endl;
        cout<<"Enter 4 update link"<<endl;
        cout<<"Enter 5 delete at front"<<endl;
        cout<<"Enter 6 delete at end"<<endl;
        cout<<"Enter 7 delete at index"<<endl;
        cout<<"Enter 8 view list"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                cout<<"enter element: ";
                cin>>element;
                list.insertatfront(element);
                break;
            case 2 :
                cout<<"enter element: ";
                cin>>element;
                list.insertatend(element);
                break;
            case 3 :
                cout<<"enter index : ";
                cin>>index;
                cout<<"enter element: ";
                cin>>element;
                list.insertatindex(index,element);
                break;
            case 4 :
                break;
            case 5 :
                break;
            case 6 :
                break;
            case 7 :
                break;
            case 8 :
                list.display();
                break;
            case 0 :
                cout<<"Exiting....."<<endl;
                break;
            default:
                cout<<"Wrong Choice!!!"<<endl;
        }

    }while(choice != 0);

    return 0;
}