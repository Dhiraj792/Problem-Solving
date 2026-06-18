#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==1){
        return 1;
    }
    return a*power(a,b-1);
}
int main()
{
    int a,b;
    a=3;
    b=3;
   int ans= power(a,b);
   cout<<ans;

    return 0;
}
