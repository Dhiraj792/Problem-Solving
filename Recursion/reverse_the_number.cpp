#include <iostream>
using namespace std;
int reverse(int n,int r=0){
    if(n==0){
        return r;
    }
   return reverse(n/10,r*10+n%10);
}

int main()
{
    int n;
    n=12345;
    int re=reverse(n);
    cout<<re;
    

    return 0;
}
