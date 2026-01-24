/*
Input: x = 6,
Orignal: 1 -> 2 -> 3 -> 4 -> 5
Output: 1 -> 2 -> 3 -> 4 -> 5 -> 6
Explanation: We can see that 6 is inserted at the end of the linkedlist.
   
*/
/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *ptr=head;
        Node *temp=new Node(x);
        if(head==NULL){
            return temp;
        }
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
        return head;
        
    }
};
