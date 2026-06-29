class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        int unique=0;
        for(int nums:arr){
            unique^=nums;
        }
        return unique;
    }
};
