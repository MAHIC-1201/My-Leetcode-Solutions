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
    int pairSum(ListNode* head) {
        int n=0,sum=0,max=0;
        ListNode *temp=head;
        ListNode *temp1=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(i!=n/2)
        {
            temp=temp->next;
            i++;
        }
        ListNode *prev=NULL;
        ListNode *current=temp;
        ListNode *next=NULL;
        while(current!=NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        temp=prev;
        for(int i=0;i<n/2;i++ )
        {
            sum=0;
            sum+=temp1->val+temp->val;
            if(sum>=max)
            {
                max=sum;
            }
            temp1=temp1->next;
            temp=temp->next;
        }


        return max;
    }
};