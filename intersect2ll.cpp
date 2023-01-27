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
        int n = 0;
        ListNode* t1 = headA;
        while(t1) {
            n++;
            t1 = t1 -> next;
        }
        int m = 0;
        ListNode* t2 = headB;
        while(t2) {
            m++;
            t2 = t2 -> next;
        }
        t1 = headA;
        t2 = headB;
        if(n > m) {
            for(int i=0;i<n-m;i++) t1 = t1 -> next;
        }
        else {
            for(int i=0;i<m-n;i++) t2 = t2 -> next;
        }
        while(t1 && t2) {
            if(t1 == t2) return t1;
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        return NULL;
    }
};