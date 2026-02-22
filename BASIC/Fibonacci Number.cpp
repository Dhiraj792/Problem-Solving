/*
Given an integer n. Write a program to find the nth Fibonacci number.

F(0)= 0, F(1)=1
The nth Fibonacci number is given by the forumla F(n) = F(n-1) + F(n-2). The first few fibonacci numbers are: 0 1 1 2 3 5. . . . 

Examples:

Input: n = 4
Output: 3
Explanation: In the series 0 1 1 2 3 5...... the fourth fibonacci number is 3.
Input: n = 5
Output: 5
Explanation: In the series 0 1 1 2 3 5 8...... the fifth fibonacci number is 5.
*/
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    // code here
   int n;
   cin>>n;
   int ans=fibonacci(n);
   cout<<ans;
    
}
