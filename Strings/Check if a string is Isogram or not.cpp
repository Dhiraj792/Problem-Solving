/*
Given a string s of lowercase alphabets, You have to check that  it is isogram or not.
An Isogram is a string in which no letter occurs more than once.

Examples:

Input: s = "machine"
Output: true
Explanation: "machine" is an isogram as no letter has appeared twice. so we return true.
Input: s = "geeks"
Output: false
Explanation: "geeks" is not an isogram as 'e' appears twice. so we return false.
Constraints:
1 ≤ |s| ≤ 103
*/
class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        int m[256]={0};
        for(char x:s){
            m[x]++;
        }
        for(char c:s ){
            if(m[c]>1){
                return false;
            }
        }
        return true;
        
    }
};
