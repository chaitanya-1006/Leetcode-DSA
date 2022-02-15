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
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
//     }
// };

     ListNode * mergeTwoLists(ListNode* a,ListNode* b)
        {
            //checking either of them are not empty
            if(a== NULL)
                return b;
            if(b== NULL)
                return a;
            
         
            ListNode* s=NULL;
            ListNode* q=NULL;
            while(a!=NULL && b!=NULL)
            {
                if(a->val < b->val)
                {
                    //if the second list contains small value
                    // with the help of p we will point a
                    // we will move the head of the link to its next(a= a->next)
                    //make p->next as null and adding at the end of the s
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
};