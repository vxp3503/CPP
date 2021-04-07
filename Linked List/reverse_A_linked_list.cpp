#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class List
{
    public:
    void  add(Node **temp,int value)
    {
        Node *root=*temp;
        if(root==NULL)
        {
            root=new Node(value);
            *temp=root;
            return;
        }
        else{
            while(root->next!=NULL)
            {
                root=root->next;
            }
            root->next=new Node(value);
        return;
        }
    }
    void reverse(Node **temp)
    {
        Node *root=*temp;
        Node *prev=NULL;
        Node *next=NULL; 
        while(root!=NULL)
        {
            next=root->next;
            root->next=prev;
            prev=root;
            root=next;
        }
        root=prev;
        *temp=root;
    }
    void print(Node *temp)
    {
        if(temp==NULL)
        {
            cout<<"list is empty";
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};
int main()
{
    Node *root=NULL;
    List l1;
    l1.add(&root,1);
    l1.add(&root,2);
    l1.add(&root,3);
    l1.add(&root,4);
    l1.add(&root,5);
    l1.add(&root,6);
    l1.add(&root,7);
    l1.print(root);
    cout<<endl<<"list after reversal";
    l1.reverse(&root);
    l1.print(root);
}