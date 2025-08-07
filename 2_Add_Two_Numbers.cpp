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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* prev  = new ListNode();
        int carry = 0;
        while (temp1!= NULL and temp2!=NULL){
            int value = temp1->val + temp2->val + carry;
            temp1-> val = value%10;
            carry = value/10;
            prev = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;

        }
        if (temp2 != NULL){
            temp1 = l1;
            temp2 = l2;
            while (temp1!=NULL){
                temp2 -> val = temp1 -> val;
                temp1 = temp1 -> next;
                temp2 = temp2 -> next;
            }
            while (carry != 0 and temp2 != NULL){
                int value = temp2-> val + carry;
                temp2 -> val = value % 10;
                carry = value / 10;
                prev = temp2;
                temp2 = temp2 -> next;
            }
            if (carry != 0){
                prev -> next = new ListNode(carry);
            }
            return l2;
        }
        if (temp1 != NULL) { 
            while (carry != 0 and temp1 != NULL){
                int value = temp1-> val + carry;
                temp1 -> val = value % 10;
                carry = value / 10;
                prev = temp1;
                temp1 = temp1 -> next;
            }
        }
        if (carry != 0){
            prev -> next = new ListNode(carry);
        }
        return l1;
    }
};
