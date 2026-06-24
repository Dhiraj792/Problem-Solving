/*Frequency of Elements
Difficulty: EasyAccuracy: 57.13%Submissions: 15K+Points: 2
Given an array arr[] of positive integers which may contain duplicate elements, return the frequency of each distinct element.

Examples:

Input: arr[] = [1, 2, 2, 3, 3, 5]
Output: [[1, 1], [2, 2], [3, 2], [5, 1]]
Explaiantion: Here element 1 and 5 occur 1 times, 2 and 3 occur 2 times.
Input: arr[] = [1, 5, 6, 7, 7]
Output: [[1, 1], [5, 1], [6, 1], [7, 2]]
Explanation: Here element 1, 5 and 6 occur 1 times, 7 occur 2 times.
*/
class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        vector<vector<int>>ans;
        ans.reserve(mp.size());
        for(const auto&[key,value]:mp){
            ans.push_back({key,value});
        }
        return ans;
    }
};
