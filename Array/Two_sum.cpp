class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    vector<int>ans;
       unordered_map<int,int>map;
       for(int i=0;i<nums.size();i++){
        if(map.find(target-nums[i])!=map.end()){
            int ind1=map[target-nums[i]];
            int ind2=i;
            ans.push_back(ind1);
            ans.push_back(ind2);
            return ans;
        }
        map[nums[i]]=i;
       }
        return {-1,-1};
    }
};
