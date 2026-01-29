/*
You are given a histogram represented by an array arr[ ], where each element of the array denotes the height of the bars in the histogram. All bars have the same width of 1 unit.

Your task is to find the largest rectangular area possible in the given histogram, where the rectangle can be formed using a number of contiguous bars.

Examples:

Input: arr[] = [60, 20, 50, 40, 10, 50, 60]
 Largest-Rectangular-Area-in-a-Histogram
Output: 100
Explanation: We get the maximum by picking bars highlighted above in green (50, and 60). The area is computed (smallest height) * (no. of the picked bars) = 50 * 2 = 100.
Input: arr[] = [3, 5, 1, 7, 5, 9]
Output: 15
Explanation:  We get the maximum by picking bars 7, 5 and 9. The area is computed (smallest height) * (no. of the picked bars) = 5 * 3 = 15.
Input: arr[] = [3]
Output: 3
Explanation: In this example the largest area would be 3 of height 3 and width 1.
Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 104
*/
class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                left[i]=0;
                s.push(i);
                
            }
            else{
                while(!s.empty() && arr[s.top()]>=arr[i])
                    s.pop();
                    left[i]=s.empty()?0:s.top()+1;
                    s.push(i);
            }
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                right[i]=n-1;
                s.push(i);
            }
            else{
                while(!s.empty() && arr[s.top()]>=arr[i])
                    s.pop();
                    right[i]=s.empty()?n-1:s.top()-1;
                    s.push(i);
                
            }
        }
        int max_area=0;
        for(int i=0;i<n;i++){
            max_area=max(max_area,arr[i]*(right[i]-left[i]+1));
        }
        return max_area;
    }
};
