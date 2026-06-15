
#include <iostream>
using namespace std;

int main()
{
    int en;
    int count=0;
    cout<<"enter your number=";
    cin>>en;
    while(en!=0){
        int digit=en%10;
        if(digit%2==0){
            count++;
        }
        en=en/10;
    }
    cout<<count;

    return 0;
}
