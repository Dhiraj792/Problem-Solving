//Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].
//Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
//Output: true
//Explanation: b[] is a subset of a[]
class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
       unordered_map<int,int>freq;
       for(int x:a){
           freq[x]++;
       }
       for(int x:b){
           if(freq[x]==0){
               return false;
           }
           freq[x]--;
       }
       return true;
    }
    };
