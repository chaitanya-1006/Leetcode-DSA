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
    ListNode* mid(ListNode* s)
    {
        ListNode* slowPtr=s;
        ListNode* fastPtr=s;
        // slowPtr = s;
        // fastPtr = s;
        while(fastPtr->next!=NULL && fastPtr->next->next != NULL)
        {
            slowPtr=slowPtr->next;
            fastPtr=fastPtr->next->next;
        }
        return slowPtr;
        
    }
    
    ListNode * merge(ListNode* a,ListNode* b)
    {
        // cout<<"1"<<endl;
        ListNode* s=NULL;
        ListNode* q=NULL;
        while(a!=NULL && b!=NULL)
        {
            if(a->val < b->val)
            {
                ListNode* p=a;
                a=a->next;
                p->next=NULL;
                if(s!=NULL)
                {
                    q->next=p;
                    q=p;
                }
                else
                {
                    s=p;
                    q=s;
                }
            }
            else
            {
                ListNode* p=b;
                b=b->next;
                p->next=NULL;
                if(s!=NULL)
                {
                    q->next=p;
                    q=p;
                }
                else
                {
                    s=p;
                    q=s;
                }
            }
        }
        
        if(b==NULL && a!=NULL)
        {
            q->next=a;
            q=a;
            a=a->next;
            //q=q->next;
        }
            
        if(a==NULL && b!=NULL)
        {
            q->next=b;
            q=b;
            b=b->next;
            //q=q->next;
        }   
        
        return s;
        
    }
        
    ListNode* mergeSort(ListNode* s)
    {
        if(s==NULL || s->next==NULL)
            return s;

        ListNode* midPtr=mid(s);

        ListNode* right=midPtr->next;
        midPtr->next=NULL;

        ListNode* a=mergeSort(s);        
        ListNode* b=mergeSort(right);

        
        s=merge(a,b);
        
//         ListNode* s1=s;
        
//         while(s1!=NULL)
//         {
//             cout<<s1->val<<" ";
//             s1=s1->next;
//         }
//         cout<<endl;
        
        return s;
        
    }
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);
    }
};