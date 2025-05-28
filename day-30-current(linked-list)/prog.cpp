#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist{
    public:
        Node* Head;
        int size;

    Linkedlist()
    {
        this->Head = NULL;
        this->size = 0;
    }

    void insertatbeginnig(int data)
    {
        Node* newNode = new Node(data);
        newNode->next = this->Head;
        this->Head = newNode;
        this->size++;
    }

    void insertatend(int data)
    {
        Node* newNode = new Node(data);
        if(this->Head == NULL)
        {
            this->Head = newNode;
        }
        else
        {
            Node* ptr = this->Head;
            while(ptr != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }
    
    void insertatindex(int index, int data)
    {
        if(index < 0 || index > this->size)
        { 
            cout<<"Invalid Index."<<endl;
            return;
        }

        if(index == 0)
        {
            insertatbeginnig(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* ptr = this->Head;

        for(int i = 0; i < index-1; i++)
        {
            ptr = ptr->next;
        }

        newNode->next = ptr->next;
        ptr->next = newNode;
        this->size++; 

    }

    void updatelist(int index, int element){}
    
    void deleteatbeginnig(){
        if(this->Head == NULL)
        {
            cout<<"List is Empty."<<endl;
            return;
        }
        
    }
    void deleteatend(){}
    void deleteatindex(){}

    int isempty(){}

    void display(){
        Node* ptr = NULL;
        ptr = this->Head;

        while(ptr != NULL)
        {
            cout<<ptr->data<<" -> ";
            ptr = ptr->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    Linkedlist list;

    Node* Head = NULL;
    Node* ptr = NULL;

    int choice,element;
    int index;

    do{

        cout<<endl<<"--------------------------------"<<endl;
        cout<<"Enter 1 Insert at beginning"<<endl;
        cout<<"Enter 2 Insert at end"<<endl;
        cout<<"Enter 3 Insert at index"<<endl;
        cout<<"Enter 4 Update list"<<endl;
        cout<<"Enter 5 Delete at beginning"<<endl;
        cout<<"Enter 6 Delete at end"<<endl;
        cout<<"Enter 7 Delete at index"<<endl;
        cout<<"Enter 8 View list"<<endl;
        cout<<"Enter 0 Exit"<<endl;

        switch(choice)
        {
            case 1 :
                cout<<"Enter Element : ";
                cin>>element;
                list.insertatbeginnig(element);
                break;
            case 2 :
                cout<<"Enter Element : ";
                cin>>element;
                list.insertatend(element);
                break;
            case 3 :
                cout<<"Enter index : ";
                cin>>index;
                cout<<"Enter Element : ";
                cin>>element;
                list.insertatindex(index,element);
                break;
            case 4 :
                cout<<"Enter Index : ";
                cin>>index;
                cout<<"Enter element to update : ";
                cin>>element;
                list.updatelist(index,element);
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
                cout<<"Exiting......!"<<endl;
                break;
            default : 
                cout<<"Wrong Choice!!!!"<<endl;
        }

    }while(choice != 0);

    return 0;
}