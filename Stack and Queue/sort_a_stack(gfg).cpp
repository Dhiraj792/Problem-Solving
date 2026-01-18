/*
Given a stack of integers st[]. Sort the stack in ascending order (smallest element at the bottom and largest at the top).

Examples:

Input: st[] = [1, 2, 3]
Output: [3, 2, 1]
Explanation: The stack is already sorted in ascending order.

Input: st[] = [41, 3, 32, 2, 11]
Output: [41, 32, 11, 3, 2]
Explanation: After sorting, the smallest element (2) is at the bottom and the largest element (41) is at the top.

Constraints:
1 ≤ st.size() ≤ 103
0 ≤ stack element ≤ 103
*/
class Solution {
  public:
  void insert_at_correct_position(int x,stack<int>&st){
      if(st.size()==0|| x>st.top()){
          st.push(x);
      }
      else{
          int a=st.top();
          st.pop();
          insert_at_correct_position(x,st);
          st.push(a);
      }
  }
  void reverse(stack<int>&st){
      if(st.size()>0){
          int x=st.top();
          st.pop();
          reverse(st);
          insert_at_correct_position(x,st);
      }
  }
    void sortStack(stack<int> &st) {
       reverse(st);
        
    }
};

