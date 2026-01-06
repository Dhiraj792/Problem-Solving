/*
You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

Note : A subarray is a continuous part of an array.

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.
*/


class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int o_sum=arr[0];
        int c_sum=arr[0];
        int size=arr.size();
        for(int i=1;i<size;i++){
           c_sum=max(arr[i],c_sum+arr[i]);
           o_sum=max(o_sum,c_sum);
        }
    
        return o_sum;
        
    }
};
