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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* head = new ListNode(-1);
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* temp3 = head;

        while ((temp1 != NULL) and (temp2!=NULL)){
            if ((temp1->val) < (temp2->val)){
                temp3->next = temp1; // assign the value of temp1 to next in the linked list
                temp3 = temp3->next; // move the temp3 pointer forward
                temp1 = temp1->next;// move the temp 1 pointer forward
                temp3->next = NULL; // disconnect the original temp1 pointer from the Linked List
            }
            else {
                temp3 -> next = temp2; // assign the vlaue of temp2 to next in the linked list 
                temp3 = temp3 -> next; // move the temp 3 pointer forward
                temp2 = temp2->next; // move the temp2 pointer forward
                temp3 -> next = NULL; // disconnect the original temp 2 pointer from the linked list
            }
        }
        if (temp1 != NULL){
            temp3->next = temp1;
        }
        if (temp2 != NULL){
            temp3 -> next = temp2;
        }
        return head->next;
    }
};
