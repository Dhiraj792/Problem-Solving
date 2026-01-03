class Solution {
  public:
    bool isPalindrome(string& s) {
       int i=0;
       int j=s.length()-1;
       for(int i=0;i<j;){
           if(s[i]!=s[j]){
               return false;
           }
           else{
               i++;
               j--;
           }
       }
       return true;
    }
};
