#include<bits/stdc++.h>
using namespace std;
class Queue
{
    public:
    int front,rear,capacity;
    int *q;
    Queue(int c)
    {
        front=rear=0;
        capacity= c;
        q=new int; 
    }
    ~Queue()
    {
        delete [] q;
    }
    void enqueue(int data)
    {
        if(capacity==rear)
        {
            cout<<"queue is full"<<endl;
        }
        else
        {
            q[rear]=data;
            rear++;
        }
    }
    void dequeue()
    {
        if(front==rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            for(int i=0;i<rear-1;i++)
            {
                q[i]=q[i+1];
                rear--;
            }
        }
    }
    void display()
    {
        if(front==rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            for(int i=front;i<rear;i++)
            {
                cout<<q[i]<<" ";
            }
        }
    }
    void qfront()
    {
        if(front==rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"Front element of queue is"<<q[front];
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the size of queue";
    cin>>n;
    Queue qu(n);
    cout<<"Enter elemets in queue";
    int item;
    for(int i=0;i<n;i++)
    {
        cin>>item;
        qu.enqueue(item);
    }
    qu.display();
    cout<<"after dequeue"<<endl;
    qu.dequeue();
    qu.display();
    qu.qfront();
}