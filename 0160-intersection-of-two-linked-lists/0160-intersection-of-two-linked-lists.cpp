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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp1=headA;
        ListNode*temp2=headB;
        int n1=0,n2=0;
        if(headA==NULL || headB==NULL) return NULL;
        while(temp1!=NULL){
            n1++;
            temp1=temp1->next;

        }
        while(temp2!=NULL){
            n2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(n1>n2){
            int rem=n1-n2;
            for(int i=0;i<rem;i++){
                temp1=temp1->next;
            }
        }
        else if(n2>n1){
            int rem=n2-n1;
            for(int i=0;i<rem;i++){
                temp2=temp2->next;
            }
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;

        

        
    }
};