/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string txt="ABCEABEFABCD";
    string pat="ABCD";
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
        }
        if(j==m){
            cout<<i<<" ";
        }
        if(j==0){
            i++;
        }
        else
        i=i+j;
    }
    return 0;
}