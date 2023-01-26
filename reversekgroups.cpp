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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL){
            k
            return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int key=0;
        while(curr!=NULL && key<k){
            
            next=curr->next;
            curr->next= prev;
            prev=curr;
            curr=next;
            key++;
        }
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};