#include"linked_list.h"

bool isPalindrome(ListNode* head);

int main()
{
    ListNode* head = NULL;
    InsertNodeAtN(1, 1, &head);
    InsertNodeAtN(2, 2, &head);
    InsertNodeAtN(2, 3, &head);
    InsertNodeAtN(1, 4, &head);
    
    Print(head);

    bool res = isPalindrome(head);
    if(res) printf("True");
    else printf("False");

    return 0;
}

bool isPalindrome(ListNode* head)
{
    if(head == NULL) return false;
    
    std::vector<int> elements;

    while(head != NULL)
    {
        elements.push_back(head->val);
        head = head->next;
    }
    int i = 0;
    int j = elements.size() - 1;
    
    while(i < j)
    {
        if(elements[i] == elements[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}