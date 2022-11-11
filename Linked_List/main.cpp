#include"linked_list.h"

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(1, 1, &head);
    InsertNodeAtN(0, 2, &head);
    InsertNodeAtN(1, 3, &head);
    InsertNodeAtN(0, 3, &head);
    
    // Print The Linked List 
    Print(head)

    return 0;
}
