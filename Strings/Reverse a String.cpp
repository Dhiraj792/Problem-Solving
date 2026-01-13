/*
You are given a string s, and your task is to reverse the string.

Examples:

Input: s = "Geeks"
Output: "skeeG"
Input: s = "for"
Output: "rof"
Input: s = "a"
Output: "a"
Constraints:
1 <= s.size() <= 106
s contains only al
*/
// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int l=s.length();
        int sm=0;
        int e=l-1;
        while(sm<e){
            swap(s[sm],s[e]);
                sm++;
                e--;
        }
        return s;
    }
};

