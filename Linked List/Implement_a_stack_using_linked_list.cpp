#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next=NULL;
};
Node *top=NULL;
void push(int data)
{
    Node *temp;
    if(top==NULL)
    {
        temp=new Node;
        temp->data=data;
        top=temp;
        return;
    }
    else{
        temp=new Node;
        temp->data=data;
        temp->next=top;
        top=temp;
    }
}
void display()
{

    Node *temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void pop()
{
    Node *temp=NULL;
    if(top==NULL)
    {
        cout<<"stack underflow";
    }
    else
    {
        temp=top;
        top=top->next;
        delete(temp);
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
    display();
}