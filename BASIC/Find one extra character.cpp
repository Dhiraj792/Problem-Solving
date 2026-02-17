/*
Given two strings s1 and s2 which are of lengths n and n+1. The second string contains all the character of the first string, but there is one extra character. Your task to find the extra character in the second string and return it. 

Examples:

Input: s1 = abcd, s2 = badce
Output: e
Input: s1 = efg, s2 = gtfe
Output: t
*/
// User function Template for C++

char extraChar(string &s1, string &s2) {
char extrachar= 0;
for(char c:s1){
    extrachar=extrachar^c;
}
for(char x:s2){
    extrachar=extrachar^x;
}
return extrachar;
    
}
