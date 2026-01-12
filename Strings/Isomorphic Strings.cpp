/*
Given two strings s1 and s2 consisting of only lowercase English letters and of equal length, check if these two strings are isomorphic to each other.
If the characters in s1 can be changed to get s2, then two strings, s1 and s2 are isomorphic. A character must be completely swapped out for another character while maintaining the order of the characters. A character may map to itself, but no two characters may map to the same character.

Examples:

Input: s1 = "aab", s2 = "xxy"
Output: true
Explanation: Each character in s1 can be consistently mapped to a unique character in s2 (a → x, b → y).
Input: s1 = "aab", s2 = "xyz"
Output: false
Explanation: Same character 'a' in s1 maps to two different characters 'x' and 'y' in s2.
*/
class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        int n=s1.length();
        int m=s2.length();
        if(n!=m){
            return false;
        }
        int m1[256]={0};
        int m2[256]={0};
        
        for(int i=0;i<n;i++){
            if(!m1[s1[i]] && !m2[s2[i]]){
                m1[s1[i]]=s2[i];
                m2[s2[i]]=s1[i];
            }
            else if(m1[s1[i]]!=s2[i]){
                return false;
            }
        }
        return true;
    }
};
