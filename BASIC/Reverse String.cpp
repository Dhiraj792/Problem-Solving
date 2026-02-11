/*
Given a string s, you need to reverse it.

Examples:

Input: s = "Hello"
Output: "olleH"
Explanation: Reverse of Hello is olleH
Input: s = "World"
Output: "dlroW"
Explanation: Reverse of World is dlroW
*/
string reverseString(string &s) {
    int start=0;
    int last=s.length()-1;
    while(start<last){
        swap(s[start],s[last]);
        start++;
        last--;
    }
    return s;
    
}
