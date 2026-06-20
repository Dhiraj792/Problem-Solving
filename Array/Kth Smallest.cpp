/*
Kth Smallest
Difficulty: MediumAccuracy: 35.17%Submissions: 828K+Points: 4Average Time: 25m
Given an integer array arr[] and an integer k, find and return the kth smallest element in the given array.
Note: The kth smallest element is determined based on the sorted order of the array.

Examples :
Input: arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output: 5
Explanation: 4th smallest element in the given array is 5.
Input: arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output: 7
Explanation: 3rd smallest element in the given array is 7.
Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105
1 ≤ k ≤  arr.size() 
*/
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq(arr.begin(),arr.end());
        for(int i=0;i<k-1;i++){
            pq.pop();
        }
        return pq.top();
        
    }
};
