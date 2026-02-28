/*
There are times when your answer is a double data type and you want to show the same in scientific format. Here, we have to get a scientific format answer out of a double data type. You have to input  a and need to output its scientific format upto 4 precision.

Examples :

Input: a = 5.43 
Output: 5.4300e+00
Constraints:
1 <= a <= 100
*/
#include <iostream>
using namespace std;

int main() {
    // code here
    double a;
    cin>>a;
    cout<<scientific<<setprecision(4)<<a;
    
    return 0;
}
