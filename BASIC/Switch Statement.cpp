/*
Given a number a, you have to use a switch statement to print "One" if the given number is equal to 1, "Two" if the number is 2, and so on till 9 ("Nine") else print "Unknown".

Note: Print the statements without quotes.

Examples:

Input: a = 10
Output: Unknown
Input: a = 1
Output: One
*/
#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
     switch(n){
         case 1:
            cout<<"One";
            break;
         case 2:
            cout<<"Two";
            break;
         case 3:
            cout<<"Three";
            break;
          case 4:
            cout<<"Four";
            break;
          case 5:
            cout<<"Five";
            break;
          case 6:
            cout<<"Six";
            break;
          case 7:
            cout<<"Seven";
            break;
         
          case 8:
            cout<<"Eight";
            break;
          case 9:
            cout<<"Nine";
            break;
        default:
            cout<<"Unknown";
            break;
         
     }

    // using switch statement

    return 0;
}
