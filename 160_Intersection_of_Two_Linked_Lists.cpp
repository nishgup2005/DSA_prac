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
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        ListNode* behind;
        ListNode* ahead;
        ListNode* intersection;
        while ((temp1 != NULL) and (temp2 != NULL)){
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        if (temp2 == NULL){
            ahead = headB;
            behind = temp1;
            intersection = headA;
        }
        if (temp1 ==NULL){
            ahead = headA;
            behind = temp2;
            intersection = headB;
        }

        while (behind!=NULL){
            behind = behind -> next;
            intersection = intersection -> next;
        }
        while (ahead != intersection){
            ahead = ahead -> next;
            intersection = intersection -> next;
        }

        return intersection;
    }
};
