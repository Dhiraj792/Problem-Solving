/*
Given two integers a and b. The task is to swap two numbers using pass by reference. Swapping here means to interchange the values of a and b. 

Examples :

Input: a = 3, b = 5
Output: 5 3
Explanation: Here, a = 3 and b = 5. After swapping a = 5 and b = 3.
Constraints:
1 <= a, b <= 106
*/
void swap(int &a,int &b) {
    a=a^b;
    b=a^b;
    a=a^b;
        
}
