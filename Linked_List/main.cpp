#include"linked_list.h"

int getDecimalValue(ListNode* head);

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(1, 1, &head);
    InsertNodeAtN(0, 2, &head);
    InsertNodeAtN(1, 3, &head);
    InsertNodeAtN(0, 3, &head);

    std::cout << getDecimalValue(head) << std::endl;


    return 0;
}

int getDecimalValue(ListNode* head)
{
    if(head == NULL) return 0;
    int res=0;
        while(head!=NULL){
            res=res*2+head->val;
            head=head->next;
        }
    return res;
}