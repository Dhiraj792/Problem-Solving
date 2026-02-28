/*
You are given two integer variables x and y. You need to perform the following operations:

p = x + y : Addition
q = x - y : Subtraction
r = x * y :Multiplication
s = x / y : Division
t = x % y : Modulo
Example :
Input: x = 1, y = 2
Output: 3 -1 2 0 1 
Explanation: The given operations are performed.
Input: x = 3, y = 4 
Output: 7 -1 12 0 3 
Explanation: The given operations are performed

*/
// User function Template for C++

void operations(int x, int y) {
    // Perform addition x+y below
    int p =x+y;
        // Perform subtraction x-y below
        int q =x-y;
            // Perform multiplication x*y below
        int r =x*y;
            // Perform division x/y below
        int s =x/y;
            // Perform modulo operation x%y below
        int t =x%y;

            // The below code prints the output. Don't change it!
        cout << p << " " << q << " " << r << " " << s << " " << t << endl;
}
