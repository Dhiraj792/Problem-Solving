/*
Given a string consisting of lowercase english alphabets. Find the repeated character present first in the string.

NOTE - If there are no repeating characters return '#'.

Example 1:

Input:
S = "geeksforgeeks"
Output: g
Explanation: g, e, k and s are the repeating
characters. Out of these, g occurs first. 
Example 2:

Input: 
S = "abcde"
Output: -1
Explanation: No repeating character present. (You need to return '#')
*/
class Solution {
  public:
    char firstRep(string s) {
        int arr[256]={0};
        for(char c:s){
            arr[c]++;
        }
        for(char c:s){
            if(arr[c]>1){
                return c;
            }
        }
        return '#';
        
    }
};
