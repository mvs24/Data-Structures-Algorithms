#include<iostream>
using namespace std;
class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Queue
{
private:
    int size;
    int front;
    int rear;
    Node **Q;
public:
    Queue(){
        front=rear=-1;
        size=10;
        Q=new Node*[size];
    }
    Queue(int size){
        front=rear=-1;
        this->size=size;
         Q=new Node*[size];
    }

void enqueue(Node *x)
{
    if (rear==size-1)
        printf("Queue is Full");
    else
    {
       rear++;
       Q[rear]=x;
    }
}
Node *dequeue()
{
     Node *x = NULL;
    if (front == rear)
        printf("Queue is Empty\n");
    else
    {
        x=Q[front+1];
        front++;
    }
    return x;
}

void display(){
    for (int i = front+1; i <= rear; ++i)
    {
        cout<<Q[i]<<endl;
    }
}
int isEmpty(){
    return front==rear;
}



};