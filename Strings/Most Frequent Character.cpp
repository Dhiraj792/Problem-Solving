#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello world";
    unordered_map<char, int> charc;
    
    for (auto x : s) {
        if (x == ' ') {
            continue;
        }
        else {
            charc[x]++;
        }
    }
  
    char maxChar = '\0';
    int maxCount = 0;

    for (auto const& [character, count] : charc) {
        if (count > maxCount) {
            maxCount = count;
            maxChar = character;
        }
    }

    cout<<maxChar;
  
    return 0;
}
