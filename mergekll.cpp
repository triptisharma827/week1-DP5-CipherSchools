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
    ListNode* mergeLists(ListNode* &list1, ListNode* &list2){
        if(list1==nullptr){
            return list2;
        }
        else if(list2==nullptr){
            return list1;
        }
        else{
            ListNode* res=nullptr;

            if(list1->val<=list2->val){
                res =list1;
                res->next=mergeLists(list1->next,list2);
            }
            else{
                res=list2;
                res->next=mergeLists(list1,list2->next);
            }
            return res;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return nullptr;
        }
        else if(lists.size()==1){
            return lists[0];
        }
        else{
            int last=lists.size()-1;
            while(last>0){
                int i=0,j=last;
                while(i<j){
                    lists[i]=mergeLists(lists[i],lists[j]);
                    i++;
                    j--;
                    if(i>=j){
                        last =j;
                    }
                }
            }
            return lists[0];
        }
    }
};