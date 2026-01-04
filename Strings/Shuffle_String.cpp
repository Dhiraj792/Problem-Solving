class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        long int n=s.length();
        vector<char>arr(n);
        for(long int i=0;i<n;i++){
            arr[indices[i]]=s[i];
        }
        return string(arr.begin(),arr.end());
    }
};
