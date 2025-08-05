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

        ListNode* forward = head;
        ListNode* rear = head ; 
        ListNode* prev = head ;
        if (forward -> next == NULL){
            return NULL;
        }

        if (n == 1){
            while (forward -> next -> next != NULL){
                forward = forward -> next;
            }
            forward -> next = NULL;
            return head;
        }

        for (int i = 0 ; i < n; i ++){
            forward = forward -> next;
            if (forward == NULL){
                head = head -> next; 
                return head;
            }
        }

        while (forward -> next != NULL){
            forward = forward -> next;
            rear = rear -> next;
        }

        if (rear != forward){
            rear-> next = rear-> next -> next;
        }
        return head;
    }
};
