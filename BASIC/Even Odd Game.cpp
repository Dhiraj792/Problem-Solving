/*
Given a number n, number of apples in a bag. You and your friend are picking one apple turnwise from the bag. It is given that the first attempt is always by you. The person picking the last apple will be the winner. 

If you will win: print "You" (without quotes)
If your friend will win: print "Friend" (without quotes)
Examples:

Input: n = 9
Output: You
Input: n = 4
Output: Friend
*/
#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Friend";
    }
    else
    cout<<"You";

    return 0;
}
