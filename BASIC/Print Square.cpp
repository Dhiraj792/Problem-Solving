/*
Given an integer n, write a program to print the square of size n using "*" character. 

Examples :

Input: n = 4
Output:
* * * *
*     *
*     *
* * * *
Explanation: It's a square! Each side contains n = 4 .
Input: n = 3
Output:
* * * 
*   *
* * *
Explanation: It's a square! Each side contains n = 3 .
*/
#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1|| j==0||j==n-1){
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
