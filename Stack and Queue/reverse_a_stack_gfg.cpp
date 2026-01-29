/*
You are given a stack st[]. You have to reverse the stack.

Examples:

Input: st[] = [1, 2, 3, 4]
Output: [1, 2, 3, 4]
Explanation: After reversing, the elements of stack are in opposite order.

Input: st[] = [3, 2, 1]
Output: [3, 2, 1]
Explanation: After reversing, the elements of stack are in opposite order.
*/


class Solution {
  public:
  void insert_at_bottom(int x,stack<int>&st){
    if(st.size()==0){
        st.push(x);
    }
    else{
        int a=st.top();
        st.pop();
        insert_at_bottom(x,st);
        st.push(a);
    }
}
  void reverse(stack<int>&st){
    if(st.size()>0){
        int x=st.top();
        st.pop();
        reverse(st);
        insert_at_bottom(x,st);
    }
}
    void reverseStack(stack<int> &st) {
        reverse(st);
        
    }
};
