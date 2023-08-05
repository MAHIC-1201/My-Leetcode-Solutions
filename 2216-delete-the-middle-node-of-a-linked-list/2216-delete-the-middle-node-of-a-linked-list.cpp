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
    ListNode* deleteMiddle(ListNode* head) {
        int n=0,i=0;
        ListNode *temp2=head;
        while(temp2!=NULL)
        {
            temp2=temp2->next;
            n++;
        }
        temp2=head;
        if(n==1)
        {
            return NULL;
        }
        while(i!=(n/2)-1)
        {
           temp2=temp2->next;
           i++;
        }
        temp2->next=temp2->next->next;
        return head;
        

        
    }
};