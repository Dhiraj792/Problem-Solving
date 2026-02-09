/*
Input: LinkedList = 1->2->4 , x = 3
Output: 1->2->3->4
Explanation: 
The new element is inserted after the current middle element in the linked list.
*/
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
    if (head == nullptr) {
        return new Node(x);
    }
    Node *newNode = new Node(x);
    Node *currNode = head;
    int len = 0;
    while (currNode != nullptr) {
        len++;
        currNode = currNode->next;
    }
  	int mid;
    if (len % 2 == 0) {
        mid = len / 2;
    }
    else {
        mid = (len + 1) / 2;
    }
    currNode = head;
    while (mid > 1) {
        currNode = currNode->next;
      	mid--;
    }
    newNode->next = currNode->next;
    currNode->next = newNode;

    return head;
}
};


