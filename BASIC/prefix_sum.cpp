#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={2,3,4,5,6};
    int n=5;
    vector<int>presum(n);
    presum[0]=arr[0];
    for(int i=1;i<arr.size();i++){
        presum[i]=arr[i]+presum[i-1];
    }
    for(auto x:presum){
        cout<<x<<" ";
    }

    return 0;
}
