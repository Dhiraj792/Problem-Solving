/*
You are given one integer a, float b and  long c variable. You need to add all these variables and store them into auto variable ans.

Examples:

Input: a= 3, b= 4.2, c= 23
Output: 30.2
Explanation: a + b + c = 30.2

*/
#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    long c;
    cin >> a >> b >> c;

    // add these variables into ans variable
    auto ans=a+b+c;

    // printing the ans
    cout << ans << endl;
    return 0;
}
