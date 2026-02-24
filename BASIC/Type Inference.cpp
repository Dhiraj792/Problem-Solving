/*
Given a C++ program having two variables a and b, it can be of any datatype like int, long, double, etc. You have to store its type id into the id1 and id2 variables.

Examples:

Input: a = 5, b = 's'
Output: i c
Explanation: typeid of int is "i" and typeid of char is "c".
*/
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int a = 3;
    float b = 5.57;

    // calculate typeid for variable a and b in variables id1 and id2.
    string id1 = typeid(a).name();
    string id2 = typeid(b).name();

    // printing the typeid's
    cout << id1 << " " << id2 << endl;
}
