/*
You are given an array arr that contains integers. You need to return the floor value of average of the non negative integers.

Note: floor returns the nearest mathematical integer value that is less than or equal to the argument.

Examples :

Input: arr = [-12, 8, -7, 6, 12, -9, 14]
Output: 10
Explanation: The positive numbers are 8 6 12 14.
The sum is 8+6+12+14 = 40, Average = 40/4 = 10
Input: arr = [1, 2, 3]
Output: 2
Explanation: The positive numbers are 1 2 3.
The sum is 1+2+3 = 6, Average = 6/3 = 2
*/
// User function Template for C++
int posAverage(int arr[], int size) {

    // Write your code to find average of positive numbers in arr array
    // return the answer
    int sum=0;
    int count=0;
    for(int i=0;i<size;i++){
       if(arr[i]>=0){ 
        sum+=arr[i];
        count+=1;
       }
    }
    int ans=sum/count;
    return ans;
}
