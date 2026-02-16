/*
You are given an array arr[] that contains integers. You need to decrement each element of the array by 1 and return the array.

Examples:

Input: arr[] = [54, 43, 2, 1, 5]
Output: 53 42 1 0 4
Explanation: Just decrement the numbers by 1.
Input: arr[] = [324, 5, 2, 2]
Output: 323 4 1 1
Explanation: Just decrement the numbers by 1.
*/
class Solution {
  public:
    int* decrementArrayElements(int arr[], int size) {
        // Code here
        int s=size-1;
        for(int i=0;i<size;i++){
            arr[i]=arr[i]-1;
        }
        
        return arr;
    }
};
