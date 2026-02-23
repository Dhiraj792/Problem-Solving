/*
Given an integer s. Write a program to print the Right angle triangle wall. The length of perpendicular and base is s. 
Note: Print exactly single " " after "*". Print a new line after printing the triangle.

Example:

Input: s = 4
Output:
* 
* * 
* * * 
* * * * 
Explanation: Length of perpendicular and base of triangle is 4 .
Input: s = 3
Output:
* 
* * 
* * * 
Explanation: Length of perpendicular and base of triangle is 3 .
*/
void triangleWall(int s) {

    // Write your code here
    for(int i=1;i<=s;i++){
        for(int j=1;j<=i;j++){
            if(i==1||j<=i){
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }
}
