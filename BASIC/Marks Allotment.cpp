/*
Given a integer a. Check if value of a lies between 0 to 100, as a is the marks alloted to a particular student in a subject and if that is then return the same value of a to marks() function. If not then code should throw an exception and return -1 for such cases. Use exception handling to take care of undefined behaviour.

Examples :

Input: a = 5
Output: 5
Input: a = 103
Output: -1
Constraints:
-103 ≤ a ≤ 103
*/

class Solution {
  public:
    int marks(int a) {
        // code here
        if(a>0&&a<=100){
            return a;
        }
        return -1;
    }
};
