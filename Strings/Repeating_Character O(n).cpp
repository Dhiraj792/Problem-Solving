/*
Given a string s, return the index of the first character that appears more than once in the string. If there is no repeated character, return -1.

Examples:

Input: s = "geeksforgeeks"
Output: 0
Explanation: We see that both 'e' and 'g' repeat as we move from left to right.But the leftmost is 'g' so we return leftmost index of 'g' that is 0.
*/
class Solution {
  public:
    int repeatedCharacter(string& s) {
        // code here
        int arr[256]={0};
        int l=s.length();
        for(int i=0;i<l;i++){
            arr[s[i]]++;
        }
        for(int i=0;i<l;i++){
            if(arr[s[i]]>1){
                return i;
            }
        }
        return -1;
    }
};

