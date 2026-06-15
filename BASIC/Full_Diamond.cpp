#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++){
        for(int space=1;space<=5-i;space++){
            cout<<" ";
        }
        for(int st=1;st<=i*2-1;st++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=1;k<=4;k++){
        for(int space2=1;space2<=k;space2++){
            cout<<" ";
        }
        for(int st2=1;st2<=2*(5-k)-1;st2++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
