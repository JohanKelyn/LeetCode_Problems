#include"linked_list.h"

ListNode* middleElement(ListNode* head);

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(1, 1, &head);
    InsertNodeAtN(2, 2, &head);
    InsertNodeAtN(3, 3, &head);
    InsertNodeAtN(4, 4, &head);
    InsertNodeAtN(5, 5, &head);
    InsertNodeAtN(6, 6, &head);
    
    Print(head);

    ListNode* res = middleElement(head);
    std::cout << res->val << std::endl;

    return 0;
}

ListNode* middleElement(ListNode* head)
{
    if(head == NULL) return head;
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

