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


//Below approach is using inOrder Traversal
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

Node* searchKey(int key, Node *root)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == key)
    {
        return root;
    }
    else if(root->data > key)
    {
        return searchKey(key, root->left);
    }
    else
    {
        return searchKey(key, root->right);
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
    
    int n = 7;

    if(isBST)
    {
        Node *ans = searchKey(n, root);
        if (ans == NULL)
        {
            std::cout << "Key not present" << std::endl;
        }
        else
        {
            std::cout << "Key present" << std::endl;
        }
    }
    return 0;
}