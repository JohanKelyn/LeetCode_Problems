#include"linked_list.h"

bool hasCycle(ListNode* head);

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(3, 1, &head);
    InsertNodeAtN(2, 2, &head);
    InsertNodeAtN(0, 3, &head);
    InsertNodeAtN(-4, 4, &head);

    ListNode* temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    PrintCycle(head);

    std::string st = hasCycle(head) ? "True" : "False";
    std::cout << st << std::endl;

    return 0;
}

bool hasCycle(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast->next && fast)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) return true;
    }
    return false;
}