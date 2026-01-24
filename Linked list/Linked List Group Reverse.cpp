/*
You are given the head of a Singly linked list. You have to reverse every k node in the linked list and return the head of the modified list.
Note: If the number of nodes is not a multiple of k then the left-out nodes at the end, should be considered as a group and must be reversed.

Examples:

Input: k = 2,
   1 -> 2 -> 3 -> 4 -> 5 -> 6

Output: 2 -> 1 -> 4 -> 3 -> 6 -> 5
Explanation: Linked List is reversed in a group of size k = 2.

*/
/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        Node *prev=NULL;
        Node *curr=head;
        int c=0;
        Node *nex;
        while(curr!=NULL && c<k){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            c++;
        }
        if(nex!=NULL){
            head->next=reverseKGroup(nex,k);
        }
        return prev;
        
    }
};












