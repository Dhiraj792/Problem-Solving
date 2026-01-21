/*
You are given the head of a linked list, You have to return the value of the middle node of the linked list.

If the number of nodes is odd, return the middle node value.
If the number of nodes is even, there are two middle nodes, so return the second middle node value.
*/
class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node *ptr=head;
        int count=0;
        while(ptr){
            ptr=ptr->next;
            count++;
        }
        if(count==0){
            return -1;
        }
        count=count/2;
        ptr=head;
        for(int i=1;i<=count;i++){
            ptr=ptr->next;
        }
        return ptr->data;
    }
};
