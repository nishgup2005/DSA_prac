/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;

        if (!head){
            return nullptr;
        }

        while (temp != NULL){
            Node* copy = new Node(temp -> val);
            copy -> next = temp -> next;
            temp -> next = copy;
            temp = temp -> next -> next;
        }
        
        Node* copyHead = head -> next;
        temp = head;
        while (temp !=NULL){

            if (temp -> random !=NULL){
            temp -> next -> random = temp -> random -> next;}

            else{
                temp -> next -> random = NULL;
            }

            temp = temp -> next -> next;
        }

        temp = head;
        while (temp != NULL){
            Node* copy = temp -> next;
            temp -> next = copy -> next;

            if (copy -> next != NULL){
                copy -> next = temp -> next -> next;
            }

            temp = temp -> next;
        }

        temp = head;
        while (temp != NULL){
            temp = temp -> next;
        }

        return copyHead;
    }
};
