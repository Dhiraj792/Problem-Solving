/*
Given an integer s. Write a program to print the Right angle triangle. The length of the perpendicular and base is s.  
Note: There is exactly single space ' ' after a start '*'. Print a new line after printing the Triangle.

Example 1:

Input: s = 9
Output:
*
* *
*   *
*     *
*       *
*         *
*           *
*             *
* * * * * * * * * 
Explanation: Length of perpendicular and base of triangle is 9.
Input: s = 4
Output:
*
* *
*   *
* * * *
Explanation: Length of perpendicular and base of triangle is 4.
Constraints:
1 ≤ s ≤ 12
*/
// User function Template for C++

void triangle(int s) {

    // Write your code here
    for(int i=1;i<=s;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==s){
                cout<<"* ";
            }
            else{
            cout<<"  ";
            }
        }
        cout<<endl;
    }

}



















