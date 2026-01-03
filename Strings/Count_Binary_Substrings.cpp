//We can convert the string s into an array groups that represents the length of same-character contiguous blocks within the string. For example, if s = "110001111000000", then groups = [2, 3, 4, 6].

class Solution {
public:
    int countBinarySubstrings(string s) {
        int cnt=0;
        int c0=0;
        int c1=0;
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]=='0'){
                c0+=1;
            }
            else
            c1+=1;
            if(c0==c1){
                cnt+=1;
                c0=0;
                c1=0;
            }
        }
        return cnt;
    }
        
};
