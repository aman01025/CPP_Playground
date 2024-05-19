#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void createNode(ListNode *head, int n)
{
    while (head->next != nullptr)
    {
        head = head->next;
    }
    ListNode *var = new ListNode();
    var->val = n;
    var->next = nullptr;
    head->next = var;
    return;
}

void printList(ListNode *head)
{
    cout << endl;
    while(head != nullptr)
    {
        cout << head->val << "  ";
        head = head->next;
    }
}

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = nullptr;
    while (head != nullptr)
    {
        curr = head;
        head = head->next;
        curr->next = prev;
        prev = curr;        
    }
    /*
    if (curr->next == nullptr)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "curr->val: " << curr->val << endl;
    }
    */
    return curr;
}

ListNode *removeNodes(ListNode *head)
{
    head = reverseList(head);
    ListNode *temp = head;
    ListNode *ret = head;
    cout << "Linked List after reversal: ";
    printList(temp);
    cout << endl;
    ListNode *largest = nullptr;
    int i = 0;
    while (head != nullptr)
    {
        i++;
        cout << "Val " << i << ": " << head->val;
        if (largest == nullptr)
        {
            cout << endl;
            largest = head;
            head = head->next;
        }
        else if (head->val >= largest->val)
        {
            cout << "   Largest - " << largest->val << endl;
            largest->next = head;
            largest = head;
            head = head->next;
        }
        else
        {
            cout << endl;
            head = head->next;
        }
    }
    largest->next = nullptr;
    cout << "Linked List after removal before exiting: ";
    printList(ret);
    return reverseList(ret);
}

int main()
{
    //[5,2,13,3,8]
    ListNode *head = new ListNode();
    head->val = 5;
    head->next = nullptr;
    createNode(head, 2);
    createNode(head, 13);
    createNode(head, 3);
    createNode(head, 8);
    ListNode *temp = head;
    cout << "Original Linked List: ";
    printList(temp);
    cout << endl;
    head = removeNodes(head);
    cout << "Linked List after removal of Nodes: ";
    temp = head;
    printList(temp);
    head = reverseList(head);
    temp = head;
    printList(temp);
    cout<< endl;

    return 0;
}