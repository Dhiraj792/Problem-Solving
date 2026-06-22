//1299.Replace Elements with Greatest Element on Right Side
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=arr[n-1];
        vector<int>ans;
        ans.push_back(-1);
        for(int i=n-2;i>=0;i--){
            if(maxi>arr[i]){
                ans.push_back(maxi);
            }
            else{
                ans.push_back(maxi);
                maxi=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
