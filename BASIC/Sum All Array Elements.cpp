/*
You are given an array that contains integers. You need to return the sum of all array elements.

Examples:

Input: arr[] = [54, 43, 2, 1, 5]
Output: 105
Explanation: Just sum it 54+43+2+1+5=105.
Input: arr[] = [324, 5, 2, 2]
Output: 333
Explanation: Just sum it 324+5+2+2=333.
*/
class Solution {
  public:
    int arraySum(int arr[], int size) {
        // Code here
        int sum=0;
        for(int i=0;i<size;i++){
            sum=sum+arr[i];
        }
        return sum;
    }
};
