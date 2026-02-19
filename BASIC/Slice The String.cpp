/*
Given a string s, you need to slice it so that the output is a substring that contains all the characters except the first and last.
Note: The length of the s will be greater than 2. 

Examples:

Input: s = "Hello"
Output: ell
Explanation: The first and last character are ignored.
Input: s = "World"
Output: orl
Explanation: The first and last characters are ignored.
*/
// User function Template for C++

// functions should slice the given string
// i.e. remove the first and the last character
// of the given string and return the sliced
// string
string sliceString(string &s) {
    // code here
   
    return s.substr(1,s.size()-2);
}
