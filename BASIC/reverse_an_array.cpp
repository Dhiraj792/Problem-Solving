#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[1])-1;
    int i=0;
    while(i<size){
        swap(arr[i],arr[size]);
        i++;
        size--;
    }
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}
