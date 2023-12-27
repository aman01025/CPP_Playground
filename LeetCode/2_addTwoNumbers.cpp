#include<iostream>


  //Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry = 0;
        ListNode *head = nullptr;
        ListNode *temp = nullptr;

        while((l1!=nullptr || l2!=nullptr))
        {
            ListNode *node = new ListNode;
            if(l1 == nullptr)
            {
                node->val = l2->val + carry;
                l2 = l2->next;
            }
            else if(l2 == nullptr)
            {
                node->val = l1->val + carry;
                l1 = l1->next;
            }
            else
            {
                node->val = l1->val + l2->val + carry;
                l1 = l1->next;
                l2 = l2->next;
            }
            carry = 0;
            if (node->val > 9)
            {
                carry = 1;
                node->val = (node->val)%10;
            }
            if(head == nullptr)
            {
                head = node;
                temp = head;
            }
            else
            {
                temp->next = node;
                temp = node;
            }
        }
        if (carry != 0)
        {
            ListNode *node = new ListNode;
            node->val = carry;
            if(head == nullptr)
            {
                head = node;
                temp = head;
            }
            else
            {
                temp->next = node;
                temp = node;
            }
        }

        return head;
    }
};