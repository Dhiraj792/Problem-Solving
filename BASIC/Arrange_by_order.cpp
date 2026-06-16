#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={0,1,2,2,1,0,0,1,2,0};
    int onces=0;
    int twos=0;
    int zeros=0;
    for(int i=0;i<arr.size();i++ ){
        if(arr[i]==1){
            onces++;
        }
        else if(arr[i]==0){
            zeros++;
        }
        else{
            twos++;
        }
    }
    cout<<zeros<<" "<<onces<<" "<<twos<<" ";
    for(int i=0;i<zeros;i++){
        arr[i]=0;
    }
     for(int i=zeros;i<zeros+onces;i++){
        arr[i]=1;
    }
     for(int i=zeros+onces;i<arr.size();i++){
        arr[i]=2;
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
