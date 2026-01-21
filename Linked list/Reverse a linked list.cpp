/*

You are given the head of a singly linked list. You have to reverse the linked list and return the head of the reversed list.

Examples:

Input:1 -> 2 -> 3 -> 4
      
Output: 4 -> 3 -> 2 -> 1
*/
/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node *curr=head;
        Node *prev=NULL;
        while(curr!= NULL){
            Node *nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        head=prev;
        return head;
    }
};
      
