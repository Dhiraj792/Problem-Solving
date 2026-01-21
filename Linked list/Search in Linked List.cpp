/*
Given a linked list with the head node and a key, the task is to check if the key is present in the linked list or not. Return true if key is present, else return false.

Example:

Input: key = 3,
      
Output: true
Explanation: 3 is present in Linked List.

Input: key = 4,
   
Output: false
Explanation: 4 is not present in Linked List.
*/
/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        Node *ptr=head;
        while(ptr){
            if((ptr->data)==key){
                return true;
            }
            ptr=ptr->next;
        }
        return false;
    }
};
