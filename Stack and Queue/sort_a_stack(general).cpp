#include <iostream>
#include<bits/stdc++.h>
using namespace std;
stack<int>st;
void insert_at_correct_position(int x){
    if(st.size()==0 || x>st.top()){
        st.push(x);
    }
    else{
        int a=st.top();
        st.pop();
        insert_at_correct_position(x);
        st.push(a);
    }
}
void reverse(){
    if(st.size()>0){
        int x=st.top();
        st.pop();
        reverse();
        insert_at_correct_position(x);
    }
}

int main()
{
    st.push(11);
    st.push(2);
    st.push(32);
    st.push(3);
    st.push(41);
    reverse();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}
