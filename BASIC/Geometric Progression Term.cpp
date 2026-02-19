/*
Given three integers, a, r and n. Where a is the first term, r is the common ratio of a G.P. and r is equal to 2.  Calculate the nth term of GP.

The nth term is given by an = a * r(n-1), where r = 2.

Examples:

Input: a = 2, n = 10
Output: 1024
Explanation: an = a * rn-1 = 2 * 210-1 = 1024
*/
#include <iostream>
using namespace std;

//Position this line where user code will be pasted.
int main() {
    int a, n;
    cin >> a >> n;
    int r = 2;

    // code here
    int ans=a*pow(r,n-1);
    cout<<ans;
    return 0;
}
