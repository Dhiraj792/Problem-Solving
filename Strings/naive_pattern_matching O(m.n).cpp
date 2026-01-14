/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string txt="ABCDABEFABCD";
    string pat="ABCD";
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=txt[i+j]){
                break;
            }
            }
             if(j==m){
                cout<<i<<" ";
        }
    }
    return 0;
}