/*
Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']'. Determine whether the Expression is balanced or not.
An expression is balanced if:

Each opening bracket has a corresponding closing bracket of the same type.
Opening brackets must be closed in the correct order.
Examples :

Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "([]"
Output: false
Explanation: The expression is not balanced as there is a missing ')' at the end.
*/
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int l=s.length();
        if(l%2!=0){
            return false;
        }
    int size=s.size();
    stack<char>st;
    for(char c:s){
      if(c=='['||c=='{'||c=='('){
          st.push(c);
      }
      else if(c==']'||c==')'||c=='}'){
          if(st.empty()){
              return false;
          }
          char top=st.top();
          if(c==']'&&top!='[' || c==')'&&top!='('||c=='}'&&top!='{'){
             return false;
          }
          st.pop();
          
      }
    }
    return st.empty();
          
    }
};
