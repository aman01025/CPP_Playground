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
    static int count = 1;
    std::cout << "Function call: " << count << std::endl;
    count++;
    if(root != NULL)
    {
        std::cout << "Curr Data: " << root->data << std::endl;
        if(!isBST(root->left))
        {            
            return false;
        }
        if(prev != NULL && root->data <= prev->data){
            return false;
        }
        prev = root;
        std::cout << "Prev Data: " << prev->data << std::endl;
        return isBST(root->right);
    }
    else
    {
        std::cout << "Data: NULL" << std::endl;
        return true;
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
    
    std::cout << isBST(root);
    return 0;
}