/*
You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.
Note: Positive number starts from 1. The array can have negative integers too.
Input: arr[] = [2, -3, 4, 1, 1, 7]
Output: 3
Explanation: Smallest positive missing number is 3.
*/
class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        int size=nums.size();
        for(int i=0;i<size;i++){
          long int ele=nums[i];
          long int chair=ele-1;
           if(ele>=1 && ele<=size){
            if(ele!=nums[chair]){
                swap(nums[chair],nums[i]);
                i--;
            }
           }
          
           }
           for(int i=0;i<size;i++){
            if(nums[i]!=i+1)
                return i+1;

            }
             return size+1;
        
    }
};
