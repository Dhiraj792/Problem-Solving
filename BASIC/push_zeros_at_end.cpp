#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int arr[]={1,0,2,0,3,0,4,0};
 int n=8;
 int k=0;
 for(int i=0;i<n;i++){
     if(arr[i]!=0){
         arr[k]=arr[i];
         k++;
     }
 }
 for(int j=k;j<n;j++){
     arr[j]=0;
 }
 for(auto x:arr){
     cout<<x<<" ";
 }

    return 0;
}
