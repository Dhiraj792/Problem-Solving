#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string st = "heloabaohel";
    unordered_map<char,int>charmap;
    for(auto ch:st){
        if(ch==' '){
            continue;
        }
        charmap[ch]++;
        if(charmap[ch]>1){
            cout<<ch;
            break;
        }
    }
    
    
    return 0;
}
