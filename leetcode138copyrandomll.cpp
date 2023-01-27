class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return NULL;
        Node* curr = head;
        Node* temp;
        while(curr != NULL)
        {
            temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }
        curr = head;
        while(curr != NULL)
        {
            if(curr->random != NULL)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }
        Node* newHead = head->next;
        curr = head;
        while(curr != NULL)
        {
            temp = curr->next;
            curr->next = temp->next;
            if(temp->next != NULL)
                temp->next = temp->next->next;
            curr = curr->next;
        }
        return newHead;
    }
};