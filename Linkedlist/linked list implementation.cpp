#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node * next;
  node(int value){
      data=value;
      next=nullptr;
  }
};
int main()
{
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    head->next=second;
    second->next=third;
    node * temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}
