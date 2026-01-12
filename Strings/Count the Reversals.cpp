/*
Given a string s consisting of only opening and closing curly brackets '{' and '}', find out the minimum number of reversals required to convert the string into a balanced expression. A reversal means changing '{' to '}' or vice-versa.

Examples:

Input: s = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
Input: s = "{{}{{{}{{}}{{"
Output: -1
Explanation: There's no way we can balance
this sequence of braces.
*/
class Solution {
  public:
    int countMinReversals(string s) {
        int size=s.length();
        if(size%2 ==1){
            return-1;
        }
        stack<char>st;
        int c1=0;
        int c2=0;
        for(int i=0;i<size;i++){
            char ch=s[i];
            if(ch=='{'){
                st.push(ch);
                c2++;
            }
            else if(ch=='}'&&!st.empty()){
                st.pop();
                c2--;
            }
            else
             c1++;
        }
        if(c1&1){
             c1=(c1/2)+1;
        }
        else
        c1=c1/2;
        if(c2&1){
            c2=(c2/2)+1;
        }
        else
        c2=c2/2;
        return c1+c2;
    }
};
