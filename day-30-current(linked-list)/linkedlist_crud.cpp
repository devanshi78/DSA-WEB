#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist{
    public:
        Node* Head;
        int size;

    Linkedlist(){
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
        Node* newNode = new Node(data);
        if(this->Head == NULL)
        {
            this->Head = newNode;
        }
        else
        {
            Node* ptr = this->Head;
            while(ptr->next != NULL){
                ptr = ptr->next; 
            }
            ptr->next = newNode;
            this->size++;
        }
    }

    void insertatindex(int index, int element) {
        if (index < 0 || index > size) {
            cout << "Index is out of bound." << endl;
            return;
        }

        Node* newNode = new Node(element);

        if (index == 0) {
            insertatfront(element);
            return;
        }
        Node* ptr = this->Head;
            for (int i = 0; i < index - 1; i++) {
                ptr = ptr->next;
            }
            newNode->next = ptr->next;
            ptr->next = newNode;
        size++;
    }

    void updatelist(int index, int element){
        if(index >= 0 && index < this->size)
        {
            Node* newNode = new Node(element);
            Node* ptr = this->Head;
            for(int i = 0; i < index; i++){
                ptr = ptr->next;
            }
            ptr->data = element;
        }
        else{
            cout<<"out of bound.";
        }
    }

    void deleteathead(){
        if(this->Head == NULL)
        {
            cout<<"List is empty."<<endl;
            return;
        }
        Node* ptr = this->Head;
        this->Head = this->Head->next;
        this->size--;
    }

    void deleteatend(){
        if(this->Head == NULL)
        {
            cout<<"List is empty."<<endl;
            return;
        }

        if(this->Head->next == NULL)
        {
            this->Head = NULL;
        }
        else
        {
            Node* ptr = this->Head;
            while(ptr->next->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = NULL;
        }
        this->size--;
    }

    void deleteatindex(int index){
        if(this->Head == NULL)
        {
            cout<<"List is empty."<<endl;
            return;
        }

        if(index < 0 || index >= this->size)
        {
            cout<<"index is out of Bound."<<endl;
            return;
        }

        if(index == 0)
        {
            this->Head = this->Head->next;
        }
        else
        {
            Node* current = this->Head;
            for(int i = 0; i < index - 1;i++)
            {
                current = current->next;
            }
            current->next = current->next->next;
        } 
        this->size--;               
    }

    void display(){
        Node* ptr = this->Head;
        cout<<"Linked List : ";
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

    list.insertatfront(10);
    list.insertatfront(20);
    list.insertatfront(30);

    list.insertatend(50);
    list.insertatend(60);

    list.updatelist(2,200);

    list.deleteathead();
    list.deleteatend();
    list.deleteatindex(3);

    list.display();

    return 0;

}