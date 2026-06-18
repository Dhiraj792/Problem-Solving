#include <iostream>
using namespace std;
int sum_of_digit(int n){
    if(n>0 &&n<=9){
        return n;
    }
    else{
        return n%10+sum_of_digit(n/10);
    }
}

int main()
{
    int n=1234;
   int sum=sum_of_digit(n);
    cout<<sum;
    return 0;
}
