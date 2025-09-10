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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL){
            return head;
        }
        int counter = 0;
        ListNode* temp = head;
        while (temp != NULL){
            counter++;
            temp = temp -> next;
        }
        k = k % counter;

        if (k == 0 ){
            return head;
        }

        k = counter - k;
        temp = head;
        for (int i = 1 ; i < k ; i++){
            temp = temp -> next;
        }
        ListNode* nxt = temp -> next ;
        temp -> next = NULL;
        temp = nxt;
        while (temp -> next !=  NULL){
            temp = temp -> next;
        }
        temp -> next = head;
        return nxt;
    }
};
