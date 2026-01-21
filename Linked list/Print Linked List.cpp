/*
You are given the head of a singly linked list. Return an array containing the values of the nodes.

Examples:

Input:
    
Output: [1, 2, 3, 4, 5]
Explanation: The linked list contains 5 elements [1, 2, 3, 4, 5]. The elements are printed in a single line.
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
    vector<int> printList(Node *head) {
        vector<int>ans;
        // code here
        Node *ptr=head;
        while(ptr!=NULL){
            ans.push_back(ptr->data);
            ptr=ptr->next;
        }
        return ans;
    }
};
