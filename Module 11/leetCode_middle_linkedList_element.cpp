/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int size(ListNode *head)
    {
        int count = 0;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        ListNode *tmp = head;
        int n = size(head);
        for (int i = 1; i <= n / 2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }

    /*
    ListNode *slow = head;
    ListNode *fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    */
};