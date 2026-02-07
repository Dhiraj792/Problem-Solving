/*
Given a link list, modify the list such that all the even numbers appear before all the odd numbers in the modified list. The order of appearance of numbers within each segregation should be the same as that in the original list.

NOTE: Don't create a new linked list, instead rearrange the provided one.
input: Linked list: 17->15->8->9->2->4->6
Output: 8->2->4->6->17->15->9
*/
// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        Node *eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
        for(Node *curr=head;curr!=NULL;curr=curr->next){
            int x=curr->data;
            if(x%2==0){
                if(eS==NULL){
                    eS=curr;
                    eE=curr;
                }
                else{
                    eE->next=curr;
                    eE=eE->next;
                }
            }
            else{
                if(oS==NULL){
                    oS=curr;
                    oE=curr;
                }
                else{
                    oE->next=curr;
                    oE=oE->next;
                }
            }
        }
        
        if(oS==NULL|| eS==NULL){
            return head;
            
        }
        eE->next=oS;
        oE->next=NULL;
        return eS;
    }
};
