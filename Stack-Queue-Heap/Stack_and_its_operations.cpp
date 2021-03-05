#include<bits/stdc++.h>
using namespace std;
#define Max 1000
class stack1
{
    int top;
    public: 
    int a[Max];
    stack1()
    { 
        top=-1;
    }
    bool push(int data)
    {
        if(top>=(Max-1))
        {
            cout<<"Stack Overflow";
            return false;
        }
        else
        {
            top++;
            a[top]=data;
            cout<<data<<"Pushed into stack";
            return true;
        }
    }
    int pop()
    {
        if(top<0)
        {
            cout<<"Stack Underflow";
            return 0;
        }
        else
        {
            int x=a[top];
            top--;
            return x;
        }
    }
    int peek()
    {
        if(top<0)
        {
            cout<<"Stack is Empty";
        }
        else
        {
            int x=a[top];
            return x;
        }
    }
    bool isempty()
    {
        return (top<0);
    }
};
int main()
{
    stack1 s;
    int n;
    cout<<"Enter how many elements u want to push on stack";
    cin>>n;
    int item;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        s.push(item);
    }
    cout<<"Stack is empty or not"<<s.isempty()<<endl;
    cout<<"Peek of stack before pop"<<s.peek()<<endl;
    s.pop();
    cout<<"Peek of stack after pop"<<s.peek();
}