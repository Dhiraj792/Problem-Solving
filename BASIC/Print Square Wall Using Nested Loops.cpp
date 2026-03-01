/*
Given an integer S. Write a program to print the Inverted "Right angle triangle" wall. The length of the perpendicular and base is S.
Note: There is exactly one " " after a "*". Print a new line after printing the triangle.

Examples:

Input: S = 4
Output:
* * * * 
* * * 
* * 
*
Explanation: Length of perpendicular and base of triangle is 4 .
Input: S = 3
Output:
* * * 
* * 
*
Explanation: Length of perpendicular and base of triangle is 3 .

*/
// User function Template for C++

void invTriangleWall(int s) {

    // Write your code here
    for(int i=s;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
