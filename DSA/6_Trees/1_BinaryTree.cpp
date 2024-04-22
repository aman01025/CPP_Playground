#include<iostream>

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        left = NULL; 
        right = NULL;
    }
};


Node* createNode(int data)
{
    Node *node = new Node();
    node->data = data;
    return node;
}

int main()
{
    Node *root = createNode(2);
    Node *p1 = createNode(6);
    Node *p2 = createNode(3);
    root->left = p1;
    root->right = p2;
    return 0;
}