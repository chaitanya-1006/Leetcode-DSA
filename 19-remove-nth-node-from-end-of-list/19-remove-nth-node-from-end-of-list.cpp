/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* a=head;
        ListNode* b=head;
        
        
        //if n is 1 , it is deleting last element
        if(n==1)
        {
            if(a->next== NULL)
                return NULL;
            else
            {
                
                while(a->next!=NULL)
                {
                    b=a;
                    a=a->next;
                    
                }
                b->next=NULL;
            }
            
            return head;
                
        }
        
        
        //if n is not 1
        //with the help of a we gare getting n memberds ahead to b in the list.
        // when we reach the end of the list and delete the pointer b we gwt what we required.
        for(int i=1;i<n;i++)
            a=a->next;
            
        if(a==NULL)
            return NULL;
        
        while(a !=NULL && a->next != NULL)
        {
            a=a->next;
            b=b->next;
            
        }
            
        b->val=b->next->val;
        b->next=b->next->next;

        return head;
    }
};