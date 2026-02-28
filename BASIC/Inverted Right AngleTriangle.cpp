/*
Given an integer n. Write a program to print the inverted "Right angle triangle" wall. The length of the perpendicular and base is n.

Note: Use string multiplication for python.

Examples:

Input: n = 4
Output:
* * * * 
* * * 
* * 
*
Explanation: Length of perpendicular and base of triangle is 4 .
Input: n = 3
Output:
* * * 
* * 
*
Explanation: Length of perpendicular and base of triangle is 3 .
Constraints:
1 <= n <= 10
*/
  class Solution {
  public:
    void printPattern(int n) {
        // code here
        for(int i=n;i>=1;i--){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
