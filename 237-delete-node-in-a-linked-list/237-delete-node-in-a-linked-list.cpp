/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
//     Brute Force Solution
//     void deleteNode(ListNode* node) {
//         ListNode* last;
//         while(node->next!=NULL)
//         {  
//             last=node;
//             node->val=node->next->val;
//             node=node->next;
//         }
//         last->next=NULL;
        
//         node=NULL;
//     }
    
    
    void deleteNode(ListNode* node) {
        ListNode* temp;
        
        node->val=node->next->val;
        temp=node->next;
        node->next=node->next->next;
        
        
        
    }
};
