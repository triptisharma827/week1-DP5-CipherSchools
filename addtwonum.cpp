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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* a=l1;
        // ListNode* b=l2;
        ListNode* result =new ListNode(0);
        ListNode* res=result;

        if(l1==NULL) return l2;
        else if(l2==NULL) return l1;
        else{
            int sum=0; int carry=0;
            while(l1!=NULL || l2!=NULL || carry!=0){
                sum=(l1==NULL?0:l1->val)+(l2==NULL?0:l2->val)+carry;
                carry=sum/10;
                sum=sum%10;
                res->next=new ListNode(sum);
                res=res->next;
                if(l1!=NULL) l1=l1->next;
                if(l2!=NULL) l2=l2->next;
            }
            // if(carry>0){
            //     res->next=new ListNode(carry);
            //     res=res->next;
            // }
        }
        return result->next;
    }
};