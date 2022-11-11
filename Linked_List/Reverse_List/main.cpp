#include"linked_list.h"

ListNode* reverseList(ListNode* head);
ListNode* reverseListRecursive(ListNode* head);

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(1, 1, &head);
    InsertNodeAtN(2, 2, &head);
    InsertNodeAtN(3, 3, &head);
    InsertNodeAtN(4, 4, &head);
    InsertNodeAtN(5, 5, &head);
    
    Print(head);

    ListNode* res = reverseListRecursive(head);
    Print(res);

    return 0;
}

ListNode* reverseList(ListNode* head)
{
    if(head == NULL) return head;

    ListNode* prev = NULL;
    while(head != NULL)
    {
        ListNode* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    return prev;
}

ListNode* reverseListRecursive(ListNode* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    ListNode* prev = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return prev;
}

