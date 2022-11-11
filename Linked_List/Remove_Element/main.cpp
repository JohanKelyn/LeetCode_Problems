#include"linked_list.h"

ListNode* removeElemenets(ListNode* head, int val);

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(1, 1, &head);
    InsertNodeAtN(1, 2, &head);
    InsertNodeAtN(6, 3, &head);
    InsertNodeAtN(6, 4, &head);
    InsertNodeAtN(4, 5, &head);
    InsertNodeAtN(5, 6, &head);
    InsertNodeAtN(6, 7, &head);
    
    Print(head);

    ListNode* res = removeElemenets(head, 6);
    Print(res);

    return 0;
}

ListNode* removeElemenets(ListNode* head, int val)
{
    if(head == NULL) return head;

    while(head != NULL && head->val == val)
    {
        ListNode* temp = head;
        head = head->next;
        delete(temp);
    }

    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr != NULL)
    {
        if(curr->val == val)
        {
            prev->next = curr->next;
        }
        else
        {
            prev = curr;
        }
        curr = curr->next;
    }
    return head;
}

