#include<iostream>
using namespace std;

class  Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class solution
{
    public:
    Node *insert(Node *root,int value)
    {
        if(root==NULL)
        {
            root= new Node(value);
            return root;
        }
        Node *temp = root;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new Node(value);
        return root;
    }
    void print(Node *root)
    {
        if(root==NULL)
        {
            cout<<"List is Empty";
            return;
        }
        Node *temp=root;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
            if(temp!=NULL)
            {
                cout<<"->";
            }
        }
    }
};
int main()
{
    solution operation;
    Node *root=NULL;
    int n;
    cout<<"Enter the no. of values that you want to insert in liked list";
    cin>>n;
    cout<<"Enter values";
    for(int i=1;i<=n;i++)
    {
        int value;
        cin>>value;
        if(i==1)
        {
            root=operation.insert(root,value);
            continue;
        }
        operation.insert(root,value);
    }
    operation.print(root);
    return 0;
}
