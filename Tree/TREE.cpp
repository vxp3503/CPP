#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};


class solution{
    public:
    Node *insert(Node *root, int data)
    {
        if(root==NULL)
        {
            root = new Node(data);
            return root;
        }
        else{
            queue<Node *>q;
            q.push(root);
            while (!q.empty())
            {
                Node *temp = q.front();
                q.pop();
                if(root->left==NULL)
                {
                    root->left=new Node(data);
                    return root;
                }
                else{
                    q.push(root->left);
                }
                if(root->right==NULL)
                {
                    root->right=new Node(data);
                    return root;
                }
                else{
                    q.push(root->right);
                }                
            }
            
        }
    }
    void inorder(Node *root)
    {
        if(root==NULL){
            return;
        }
        else{
            inorder(root->left);
            cout<<root->data;
            inorder(root->right);
        }
    }
};



int main()
{
    solution  operation;
    Node *root=NULL;
    int data,n;
    cout<<"Enter no. of nodes";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"root"<<endl;
            cin>>data;
            root=operation.insert(root,data);
        }
        else if(i%2!=0){
            cout<<"left"<<endl;;
            cin>>data;
            operation.insert(root,data);
        }
        else{
            cout<<"right"<<endl;;
            cin>>data;
            operation.insert(root,data);
        }
    }
    cout<<"Inorder Output"<<endl;
    operation.inorder(root);
}