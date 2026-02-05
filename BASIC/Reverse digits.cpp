/*
Examples:

Input: n = 122
Output: 221
Explanation: By reversing the digits of number, number will change into 221.
Input : n = 200
Output: 2
Explanation: By reversing the digits of number, number will change into 2.
Input : n = 12345 
Output: 54321
Explanation: By reversing the digits of number, number will change into 54321.
Constraints:
1 <= n <= 106
  */

class Solution {
  public:
    int reverseDigits(int n) {
       int remainder;
       int reversed_number=0;
       while(n!=0){
        remainder = n % 10;          
        reversed_number = reversed_number * 10 + remainder; 
        n /= 10;   
       }
       return reversed_number;
    }
};
