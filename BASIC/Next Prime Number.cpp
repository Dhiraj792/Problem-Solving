/*
Given an integer n. Write a program to find the first prime number greater than n.

Examples:

Input: n = 15
Output: 17
Explanation: 17 is next prime number.
Input: n = 7
Output: 11
Explanation: 11 is the prime number next to 7.
Constraints:
1 <= n <= 500
*/
// User function Template for C++
bool prime(int nums){
    for(int i=2;i<=sqrt(nums);i++){
        if(nums%i==0){
            return false;
        }
    }
    return true;
}
int nextPrime(int n) {
int nums=n+1;
while(!prime(nums)){
    nums++;
}
return nums;
}
