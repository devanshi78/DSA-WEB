#include<iostream>
using namespace std;

class Queue{
    public:
        int front,rare,capacity;
        int* arr;
    
    Queue(int capacity){
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = this->rare = -1;
    }

    ~Queue(){
        delete[] arr;
    }

    void Enqueue(int data);
    int Dequeue();
    int Front();
    int Rare();
    bool isEmpty();
    bool isFull();
    int size();
    void display();
};

void Queue::Enqueue(int data){
    if(this->isFull())
    {
        cout<<"Queue is overflow."<<endl;
    }
    else if(this->front == -1 && this->rare == -1)
    {
        this->front = this->rare = 0;
        this->arr[this->rare] = data;
    }
    else
    {
        this->arr[++this->rare] = data;
    }
}

int Queue::Dequeue(){
    if(this->isEmpty())
    {
        cout<<"Queue is underflow."<<endl;
        return -1;
    }
    else if(this->front == this->rare)
    {
        this->front = this->rare = -1;
    }
    else
    {
        cout<<"Dequeue element : "<<arr[this->front];
        return arr[this->front++];
    }
}

int Queue::Front(){
    
}

int Queue::Rare(){

}

bool Queue::isEmpty(){

}

bool Queue::isFull(){
    
}

int Queue::size(){

}

void Queue::display(){

}

int main(){

}