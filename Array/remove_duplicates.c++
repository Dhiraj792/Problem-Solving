#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>arr={1,1,1,2,2,3};
   int size=arr.size();
   int off=0;
   int no_of_unique=1;
   int cm=1;
   while(cm<size){
       if(arr[cm]!=arr[cm-1]){
           arr[off+1]=arr[cm];
           off++;
           no_of_unique++;
       }
       cm++;
   }
for(int i=0;i<no_of_unique;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
