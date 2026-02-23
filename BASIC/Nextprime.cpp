/*
Given an integer n. Write a program to find the first prime number greater than n.

Examples:

Input: n = 15
Output: 17
Explanation: 17 is next prime number.
Input: n = 7
Output: 11
Explanation: 11 is the prime number next to 7.
*/
bool isprime(int n){
    if(n<=1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int nextPrime(int n) {
    int nextprime=n+1;

while(true){
if(isprime(nextprime)){
        return nextprime;
    }
       nextprime+=1;
}
 
}
