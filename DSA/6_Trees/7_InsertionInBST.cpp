#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *left = nullptr;
        Node *right = nullptr;
};

Node* createNode(int n)
{
    Node *temp = new Node();
    temp->data = n;
    return temp; 
}

bool isBST(Node *root)
{
    static Node *prev = NULL;
    if(root != NULL)
    {
        if(!isBST(root->left))
        {            
            return false;
        }
        if(prev != NULL && root->data <= prev->data){
            return false;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return true;
    }
}

void insertElement(Node *root, int n)
{
    Node *prev = nullptr;
    while (root!=NULL)
    {
        if(n == root->data)
        {
            cout << "Element already present" << endl;
            return;
        }
        else if(n < root->data)
        {
            prev = root;
            root = root->left;
        }
        else
        {
            prev == root;
            root = root->right;
        }
        Node *newNode = new Node();
        newNode->data = n;
        if(n < prev->data)
        {
            prev->left = newNode;
        }
        else
        {
            prev->right = newNode;
        }
    }
}

int main()
{
    Node *root = createNode(5);
    Node *p1 = createNode(3);
    Node *p2 = createNode(6);
    Node *p3 = createNode(1);
    Node *p4 = createNode(4);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    if(isBST)
    {
        int n = 19;
        insertElement(root,n);
    }

    return 0;
}