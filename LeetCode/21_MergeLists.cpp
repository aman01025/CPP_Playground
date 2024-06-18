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
    while (head != nullptr)
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

ListNode* mergeTwoLists(ListNode *list1, ListNode *list2)
{
    cout << endl;
    ListNode *ret = nullptr;
    if (list1 == nullptr && list2 == nullptr)
    {
        cout << "Log 1" << endl; 
        return nullptr;
    }
    else if (list1 == nullptr)
    {
        cout << "Log 2" << endl; 
        return list2;
    }
    else if (list2 == nullptr)
    {
        cout << "Log 3" << endl; 
        return list1;
    }
    else
    {
        cout << "Log 4" << endl;
        ListNode *iter = nullptr;

        while (list1 != nullptr && list2 != nullptr)
        {
            cout << "1: " << list1->val << "    2: " << list2->val << endl;
            if (list1->val <= list2->val)
            {
                cout << "Log 5" << endl; 
                if (iter == nullptr)
                {
                    iter = list1;
                    ret = list1;
                    list1 = list1->next;
                    continue;
                }
                cout << "Log 6" << endl; 
                iter->next = list1;
                list1 = list1->next;
                iter = iter->next;
            }
            else
            {
                cout << "Log 7" << endl; 
                if (iter == nullptr)
                {
                    iter = list2;
                    ret = list2;
                    list2 = list2->next;
                    continue;
                }
                cout << "Log 8" << endl; 
                iter->next = list2;
                list2 = list2->next;
                iter = iter->next;
            }
        }
        if (list1 == nullptr)
        {
            iter->next = list2;
        }
        else if (list2 == nullptr)
        {
            iter->next = list1;
        }
    }
    return ret;
}

int main()
{
    
    ListNode *list1 = new ListNode();       //[1, 2, 4]
    ListNode *list2 = new ListNode();       //[1, 3, 4]
    list1->val = 1;
    list1->next = nullptr;
    list2->val = 1;
    list2->next = nullptr;
    createNode(list1, 2);
    createNode(list1, 4);
    createNode(list2, 3);
    createNode(list2, 4);
    ListNode *temp = list1;
    cout << "Original Linked List 1: ";
    printList(temp);
    cout << endl;
    temp = list2;
    cout << "Original Linked List 2: ";
    printList(temp);
    cout << endl;

    ListNode *ans = mergeTwoLists(list1, list2);
    cout << "Merged Linked List: ";
    printList(ans);
    return 0;
}