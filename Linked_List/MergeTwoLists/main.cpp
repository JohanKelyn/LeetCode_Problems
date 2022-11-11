#include"linked_list.h"

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);

int main()
{
    ListNode* list1 = NULL;
    InsertNodeAtN(1, 1, &list1);
    InsertNodeAtN(2, 2, &list1);
    InsertNodeAtN(4, 3, &list1);
    InsertNodeAtN(5, 4, &list1);
    Print(list1);

    ListNode* list2 = NULL;
    InsertNodeAtN(1, 1, &list2);
    InsertNodeAtN(3, 2, &list2);
    InsertNodeAtN(4, 3, &list2);
    Print(list2);

    ListNode* res = mergeTwoLists(list1, list2);
    Print(res);

    
    return 0;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;

    ListNode* head = NULL;

    if(list1->val < list2->val)
    {
        head = list1;
        list1 = list1->next;
    }
    else
    {
        head = list2;
        list2 = list2->next;
    }

    ListNode* temp = head;
    while(list1 && list2)
    {
        if(list1->val < list2->val)
        {
            temp->next = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    if(list1)
    {
        temp->next = list1;
    }
    else
    {
        temp->next = list2;
    }

    return head;
}