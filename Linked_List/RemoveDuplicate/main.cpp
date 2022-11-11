#include"linked_list.h"

ListNode* removeDuplicate(ListNode* head);

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(1, 1, &head);
    InsertNodeAtN(1, 2, &head);
    InsertNodeAtN(2, 3, &head);
    InsertNodeAtN(3, 4, &head);
    InsertNodeAtN(3, 5, &head);
    Print(head);

    head = removeDuplicate(head);
    Print(head);

    return 0;
}

ListNode* removeDuplicate(ListNode* head)
{
    if(head == NULL) return head;

    ListNode* temp = head;
    while(temp->next)
    {
        if(temp->val == temp->next->val)
        {
            ListNode* node = temp->next;
            temp->next = temp->next->next;
            delete(node);
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}