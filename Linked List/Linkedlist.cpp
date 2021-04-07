#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class solution
{
    public:
    Node *createnode(int data)
    {
        Node* temp=new Node;
        temp->data=data;
        temp->next=NULL;
        return temp;
    }
    int printNfromlast(Node *head,int n)
    {
        if(head==NULL)
    {
        return -1;
    }
     Node *first=head;
        Node *second=head;
        while(n>0&&second!=NULL)
        {
            second=second->next;
            n--;
        }
        if(second==NULL&&n==0)
        {
            return first->data;
        }
        if(second==NULL)
        {
            return -1;
        }
        while(second!=NULL)
        {
            first=first->next;
            second=second->next;
        }
        return first->data;
        if(first==NULL)
        {
            return -1;
        }
    }
    void addatbegin(Node **temp,int data)
    {Node *root=*temp;
        if(root==NULL)
        {
            root=createnode(data);
        }
        else{
            Node *tempo=root;
            root=createnode(data);
            root->next=tempo;
        }
        *temp=root;
    }
    void print(Node **root)
    {
        Node *temp =*root;
        cout<<"root->";
        if(temp==NULL)
        {
            cout<<"0";
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    void addatend(Node **temp,int data)
    {
        Node *root=*temp;
        if(root==NULL)
        {
            root=createnode(data);
            *temp=root;
        }
        else{
            while(root->next!=NULL)
            {
                root=root->next;
            }
            root->next=createnode(data);
        }
    }
    void deletenode(Node **root,int data)
    {
        Node *temp=*root;
        if(temp->data==data)
        {
            *root=temp->next;
            delete temp;
            return;
        }
        if(temp==NULL)
        {
            return;
        }
        else{
            Node *prev=temp;
            temp=temp->next;
            while(temp!=NULL)
            {
                if(temp->data==data)
                {
                    prev->next=temp->next;
                    delete temp;
                    return;
                }
                prev=temp;
                temp=temp->next;
            }
        }
    }
};
int main()
{
    solution list;
    Node *root=NULL;
    list.addatbegin(&root,1);
    list.addatbegin(&root,2);
    list.addatbegin(&root,3);    
    list.addatbegin(&root,4);
    list.addatbegin(&root,5);
    list.addatend(&root,10);
    list.print(&root);
    list.deletenode(&root,10);
    list.print(&root);
    cout<<endl;
    cout<<list.printNfromlast(root,2);
}