class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int i=0;
        int m=s.length();
        int n=t.length();
        while(i<m&&j<n){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==m;

    }
};
