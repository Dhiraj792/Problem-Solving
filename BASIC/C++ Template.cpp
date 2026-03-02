/*
Template in C++ is a feature. We write code once and use it for any data type including user defined data types. 

Given three cases :
1st case when two strings are given , print the smallest of the two strings.
2nd case when two integers are given, print the smallest of the two integers.
3rd case when two char are given , print the smallest of the two characters(lowercase).

Your task is to complete class minElement which would include a private variable say y, a constructor which would set the given value to the private variable. And a method check() which would take one parameter say x and print the min of x and y(private variable) .

First line of each input will contain 1 integer c. Next line will contain two strings if c is equal to 1 or will contain two integers if c is equal to 2 or will contain two char if value of c is equal to 3. We have to print the lowest of the two values given.

Examples :

Input: 1
gfg spl
Output: gfg
Input: 2
5 9
Output: 5

*/
template <class T>
class minElement {
    T y;   // private variable

public:
    // Constructor
    minElement(T value) {
        y = value;
    }

    // Method to check and print minimum
    void check(T x) {
        if (x < y)
            cout << x << endl;
        else
            cout << y << endl;
    }
};




