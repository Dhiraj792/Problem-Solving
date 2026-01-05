/*for example
IP:s1="abc"
   s2="123"
   res="a1bc23","a123bc","ab12c3" this all are valid but if res string like "b123ac" this is wrong
*/    
#include <iostream>
using namespace std;


int main()
{
    string s1,s2,res;
    cin>>s1>>s2>>res;
    int l1=s1.length();
    int l2=s2.length();
    int rl=res.length();
    if((l1+l2)!=rl){
        cout<<"No"<<endl;
    }
    else{
        int i=0;int j=0;int k=0;
    while(k<rl){
        if(i<l1&&s1[i]==res[k]){
            i++;
        }
        else if(j<l2&&s2[j]==res[k]){
            j++;
        }
        else{
            break;
        }
        k++;
    }
    if(i<l1 or j<l2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"Yes";
    }
    }
    return 0;
}
