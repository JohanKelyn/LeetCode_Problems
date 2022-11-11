#include"linked_list.h"

ListNode* getIntersectionNode(ListNode* list1, ListNode* list2);

int main()
{
    ListNode* list1 = NULL;
    InsertNodeAtN(4, 1, &list1);
    InsertNodeAtN(1, 2, &list1);
    
    ListNode* temp1 = list1;
    while(temp1->next)
    {
        temp1 = temp1->next;
    }

    ListNode* list2 = NULL;
    InsertNodeAtN(5, 1, &list2);
    InsertNodeAtN(6, 2, &list2);
    InsertNodeAtN(1, 3, &list2);
    
    ListNode* temp2 = list2;
    while(temp2->next)
    {
        temp2 = temp2->next;
    }

    ListNode* list3 = NULL;
    InsertNodeAtN(8, 1, &list3);
    InsertNodeAtN(4, 2, &list3);
    InsertNodeAtN(5, 3, &list3);
    Print(list3);
    
    temp1->next = list3;
    temp2->next = list3;

    Print(list1);
    Print(list2);

    ListNode* sol = NULL;
    sol = getIntersectionNode(list1, list2);
    printf("%d ", sol->val);

    return 0;
}

ListNode* getIntersectionNode(ListNode* list1, ListNode* list2)
{
    ListNode* a = list1;
    ListNode* b = list2;

    while(a != b)
    {
        if(a != NULL) a = a->next;
        else a = list2;

        if(b != NULL) b = b->next;
        else b = list1;
    }

    return a;
}