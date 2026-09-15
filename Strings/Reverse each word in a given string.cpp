/*
You are given a string s. You need to reverse each word in it where the words are separated by spaces and return the modified string.

Note: The string may contain leading or trailing spaces, or multiple spaces between two words. The returned string should only have a single space separating the words, and no extra spaces should be included.

Examples:

Input: s = " i like this program very much "
Output: "i ekil siht margorp yrev hcum"
Explanation: The words are reversed as follows:
"i" -> "i","like"->"ekil",
"this"->"siht","program" -> "margorp",
"very" -> "yrev","much" -> "hcum".
*/
class Solution {
  public:
    string reverseWords(string &s) {
 
         stack<char>st;
         string re="";
         for(int i=0;i<s.length();i++){ 
             if(s[i]!=' '){
                 st.push(s[i]);
             }
             else{
                 if(!st.empty()){
                 while(!st.empty()){
                     re+=st.top();
                     st.pop();
                    }
                  re+=' ';
             }

         }
         }
         while(!st.empty()){
             re+=st.top();
             st.pop();
         }
          if (!re.empty() && re.back() == ' ') {
            re.pop_back();
        }
         return re;
    }
};
