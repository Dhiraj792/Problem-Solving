/*
Given three numbers a, b, and c. You need to find which is the greatest of them all.

Examples:

Input: a = 1, b = 2, c = 3
Output: 3
Explanation: Clearly, c = 3 is the greatest of (1, 2, 3)
Input: a = 2, b = 2, c = 5
Output: 5
Explanation: Out of (2, 2, 5) 5 is the greatest.
Constraints:
1 <= a, b, c <= 103
*/
#include <iostream>
using namespace std;

int main() {
    // code here
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&a>c){
        cout<<a;
    }
    else if(b>c){
        cout<<b;
    }
    else 
    cout<<c;
    return 0;
}
