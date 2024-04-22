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

bool searchNum(int n, Node *root)
{
    while(root != NULL)
    {
        if(n == root->data)
        {
            return true;
        }
        else if(n > root->data)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    return false;
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
    
    int n = 3;

    if(isBST)
    {
        if(searchNum(n, root))
        {
            std::cout << "Number present" << std::endl;
        }
        else{
            std::cout << "Number not present" << std::endl;
        }
    }
    return 0;
}