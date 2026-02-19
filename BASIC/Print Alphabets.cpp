/*
Given two char c1 and c2.  you need to print all the alphabet starting from c1 to c2 in a single line.
Note: Print all characters with a single space after it and all in a single line. Don't add a new line after printing.

Examples:

Input: c1 = 'a', c2 = 'z'
Output: "a b c d e f g h i j k l m n o p q r s t u v w x y z "
Explanation: Printed alphabets from a to z.
Input: c1 = "h", c2 = "u"
Output: "h i j k l m n o p q r s t u "
Explanation: Printed alphabets from h to u.
*/
// User function Template for C++

// function should print the alphabets
// from c1 to c2 (space separated)
// No need to print the new line
// The new line will be printed by the
// driver's code.

void alphabets(char c1, char c2) {
    // code here
    for(char c=c1;c<=c2;c++){
        cout<<c<<" ";
    }
}
