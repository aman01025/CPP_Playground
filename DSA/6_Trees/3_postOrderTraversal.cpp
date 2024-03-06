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

void postOrder(Node *head)
{
    if (head != NULL)
    {
        postOrder(head->left);
        postOrder(head->right);
        std::cout << head->data << std::endl;
    }
}

int main()
{
    Node *root = createNode(4);
    Node *p1 = createNode(1);
    Node *p2 = createNode(6);
    Node *p3 = createNode(5);
    Node *p4 = createNode(2);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;
    postOrder(root);
    return 0;
}