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
        int l=0;
        if(head==NULL || head->next==NULL) return NULL;
        
        ListNode *temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        temp=head;
        if(l==n) return head->next;
        for(int i=0;i<l-n-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};