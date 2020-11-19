#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            root = new Node(data);
            return root;
        }
        if (data < root->data)
        {
            root->left = insert(root->left, data);
        }
        if (data > root->data)
        {
            root->right = insert(root->right, data);
        }
        return root;
    }
    void levelorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            queue<Node *> q;
            Node *temp;
            q.push(root);
            while (!q.empty())
            {
                temp = q.front();
                q.pop();
                cout << temp->data;
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }
    void reverselevelorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            queue<Node *> q;
            stack<Node *> s;
            Node *temp;
            q.push(root);
            while (!q.empty())
            {
                temp = q.front();
                q.pop();
                s.push(temp);
                if (temp->right)
                {
                    q.push(temp->right);
                }
                if (temp->left)
                {
                    q.push(temp->left);
                }
            }
            while (!s.empty())
            {
                temp = s.top();
                cout << temp->data;
                s.pop();
            }
        }
    }
    int hightoftree(Node *root)
    {
        if (root == NULL)
        {
            return -1;
        }
        int lefttree = hightoftree(root->left);
        int righttree = hightoftree(root->right);
        if (lefttree > righttree)
        {
            return lefttree + 1;
        }
        else
        {
            return righttree + 1;
        }
    }
    void inorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            inorder(root->left);
            cout << root->data;
            inorder(root->right);
        }
    }
    void preorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            cout << root->data;
            preorder(root->left);
            preorder(root->right);
        }
    }
    void postorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data;
        }
    }
    void print(Node *root)
    {
        cout << "Levelorder Output" << endl;
        levelorder(root);
        cout << endl;
        cout << "Reverse Levelorder Output" << endl;
        reverselevelorder(root);
        cout << endl;
        cout << "Inorder Output" << endl;
        inorder(root);
        cout << endl;
        cout << "Preorder Output" << endl;
        preorder(root);
        cout << endl;
        cout << "Postorder Output" << endl;
        postorder(root);
        cout << endl;
        cout << "Hight Of Tree" << endl;
        cout << hightoftree(root);
        cout << endl;
    }
    Node *search(Node *root, int data)
    {
        if (root == NULL || root->data == data)
        {
            return root;
        }
        if (root->data < data)
        {
            return search(root->right, data);
        }
        return search(root->left, data);
    }
};
int main()
{
    solution operation;
    Node *root = NULL;
    int data, n;
    cout << "Enter no. of nodes";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cin >> data;
            root = operation.insert(root, data);
        }
        else
        {
            cin >> data;
            operation.insert(root, data);
        }
    }
    operation.print(root);
    cout << "Press 1 if u want to search an element else press 0";
    cin >> data;
    if (data == 1)
    {
        cout << "Enter the value which u want to search";
        cin >> data;
        if (operation.search(root, data) != NULL)
        {
            cout << "Data is present in tree";
        }
        else
        {
            cout << "data is not present";
        }
    }
    return 0;
}