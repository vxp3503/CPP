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
        else
        {
            queue<Node *> q;
            q.push(root);
            while (!q.empty())
            {
                Node *temp = q.front();
                q.pop();
                if (temp->left == NULL)
                {
                    temp->left = new Node(data);
                    return root;
                }
                else
                {
                    q.push(temp->left);
                }
                if (temp->right == NULL)
                {
                    temp->right = new Node(data);
                    return root;
                }
                else
                {
                    q.push(temp->right);
                }
            }
        }
    }
    Node *deletion(Node *root, int data)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root->left == NULL, root->right == NULL)
        {
            if (root->data == data)
            {
                return NULL;
            }
            else
            {
                return root;
            }
        }
        queue<Node *> q;
        q.push(root);
        Node *datanode = NULL;
        Node *temp;
        while (!q.empty())
        {
            temp = q.front();
            q.pop();
            if (temp->data == data)
            {
                datanode = temp;
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        if (datanode != NULL)
        {
            int x = temp->data;
            deletenode(root, temp);
            datanode->data = x;
        }
        return root;
    }
    void deletenode(Node *root, Node *depth_node)
    {
        Node *temp;
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            temp = q.front();
            q.pop();
            if (temp == depth_node)
            {
                temp = NULL;
                delete (depth_node);
                return;
            }
            if (temp->right)
            {
                if (temp->right == depth_node)
                {
                    temp->right = NULL;
                    delete (temp->right);
                    return;
                }
                else
                {
                    q.push(temp->right);
                }
            }
            if (temp->left)
            {
                if (temp->left == depth_node)
                {
                    temp->left = NULL;
                    delete (temp->left);
                    return;
                }
                else
                {
                    q.push(temp->left);
                }
            }
        }
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
            return lefttree+1;
        }
        else
        {
            return righttree+1;
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
            cout << "root" << endl;
            cin >> data;
            root = operation.insert(root, data);
        }
        else if (i % 2 != 0)
        {
            cout << "left" << endl;
            ;
            cin >> data;
            operation.insert(root, data);
        }
        else
        {
            cout << "right" << endl;
            ;
            cin >> data;
            operation.insert(root, data);
        }
    }
    operation.print(root);
    cout << "Enter element which you want to delete";
    cin >> data;
    root = operation.deletion(root, data);
    cout << "After Deletion" << endl;
    operation.print(root);
}