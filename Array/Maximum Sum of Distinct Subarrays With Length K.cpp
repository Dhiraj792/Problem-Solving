//2461. Maximum Sum of Distinct Subarrays With Length K
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int o_sum=0;
        int n=nums.size();
        for(int i=0;i<=n-k;i++){
            int sum=0;
            for(int j=i;j<i+k;j++){
                if(nums[j]!=nums[j+]){
                sum=sum+nums[j];
            }
            }
            o_sum=max({sum,o_sum});
        }
        return o_sum;
    }
};
