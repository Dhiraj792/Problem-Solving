/*
Given an array of intervals arr[][] of size n, where arr[i] = [starti, endi] represents the start and end points of the ith interval, merge all overlapping intervals and return the resulting array of non-overlapping intervals.
Note: Two intervals [a, b] and [c, d] such that a ≤ c, are considered overlapping if  c ≤ b.

Examples:

Input: arr[][] = [[1, 3], [2, 4], [6, 8], [9, 10]]
Output: [[1, 4], [6, 8], [9, 10]]
Explanation: In the given intervals we have only two overlapping intervals here, [1, 3] and [2, 4] which on merging will become [1, 4]. Therefore we will return [[1, 4], [6, 8], [9, 10]].
Input: arr[][] = [[6, 8], [1, 9], [2, 4], [4, 7]]
Output: [[1, 9]]
Explanation: In the given intervals all the intervals overlap with the interval [1, 9]. Therefore we will return [1, 9].
Constraints:
1 ≤ n ≤ 105
0 ≤ starti ≤ endi ≤ 106
*/
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
       int n= arr.size();
       sort(arr.begin(),arr.end());
       stack<pair<int,int>>s;
       s.push({arr[0][0],arr[0][1]});
       
       for(int i=1;i<n;i++){
           int s1=s.top().first;
           int e1=s.top().second;
           int s2=arr[i][0];
           int e2=arr[i][1];
           if(s2>e1){
               s.push({arr[i][0],arr[i][1]});
           }
           else{
               s.pop();
               s.push({s1,max(e1,e2)});
           }
       }
       vector<vector<int>>ans;
      while(!s.empty()){
          auto p=s.top();
          s.pop();
          ans.push_back({p.first,p.second});
      }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
