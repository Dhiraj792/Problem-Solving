/*
You are given a function utility() which prints count  every time it is called. The function will be called by the driver's code n times.
You just need to declare count variable in its right place in the code.

Example :

Input: n = 4
Output: 1 2 3 4
Input: n = 2
Output: 1 2
*/

void utility() {

    static int count=0;
    count++;
    cout << count;
    
}
