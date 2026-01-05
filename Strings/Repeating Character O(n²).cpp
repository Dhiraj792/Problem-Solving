/*
Input: s = "geeksforgeeks"
Output: 0
Explanation: We see that both 'e' and 'g' repeat as we move from left to right.But the leftmost is 'g' so we return leftmost index of 'g' that is 0.
*/
class Solution {
  public:
    int repeatedCharacter(string& s) {
        // code here
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    return i;
                }
            }
        }
        return -1;
    }
};
