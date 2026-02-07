/*
Given the head of two sorted linked lists consisting of nodes respectively. Merge both lists and return the head of the sorted merged list.

Examples:

Input:
  
Output: 2 -> 3 -> 5 -> 10 -> 15 -> 20 -> 40
Explanation:
   
*/
/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* a, Node* b) {
        if(a==NULL) return b;
        if(b==NULL)return a;
        Node *head=NULL;
        Node *tail=NULL;
        if(a->data<=b->data){
            head=tail=a;
            a=a->next;
            
        }
        else{
            head=tail=b;
            b=b->next;
        }
        while(a!=NULL && b!=NULL){
            if(a->data<=b->data){
                tail->next=a;
                tail=a;
                a=a->next;
            }
            else{
                tail->next=b;
                tail=b;
                b=b->next;
            }
            
        }
        if(a==NULL){
            tail->next=b;
        }
        else
        tail->next=a;
        return head;
    }
};
