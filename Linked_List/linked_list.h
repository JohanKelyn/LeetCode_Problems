#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>

// Definition of a Linked List
struct ListNode
{
    ListNode* next;
    int val;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


// Inserting Node at the Beginning
void InsertAtBeginning(int x, ListNode** head)
{
    ListNode* temp = new ListNode();
    temp->val = x;
    temp->next = *head;
    *head = temp;
}

// Inserting a Node at the end
void Insert(int x, ListNode** head)
{
    ListNode* n = new ListNode(x);

    if(*head == NULL)
    {
        *head = n;
    }
    else
    {
        ListNode* temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

// Inserting Node at N position
void InsertNodeAtN(int x, int n, ListNode** head)
{
    ListNode* node = new ListNode(x);
    if(n == 1 && *head == NULL)
    {
        *head = node;
    }
    else{
        ListNode* temp = *head;
        for(int i = 0; i < n - 2; i++)
        {
            temp = temp->next;
        }
        
        node->next = temp->next;
        temp->next =  node;
    }
}

// Print the Linked List
void Print(ListNode* head)
{
    ListNode* temp = head;

    while(temp != NULL)
    {
        std::cout << temp->val << " ";
        temp = temp->next;
    }

    std::cout << std::endl;
}

// Recursive Printing of Linked List
void PrintRecursive(ListNode* head)
{
    if(head == NULL) return;
    std::cout << head->val << std::endl;
    PrintRecursive(head->next);
}

void PrintCycle(ListNode* head)
{
    int k = 0;

    ListNode* temp = head;

    while(temp != NULL)
    {
        if(k >= 10) break;
        std::cout << temp->val << " ";
        temp = temp->next;
        k++;
    }

    std::cout << std::endl;
}


