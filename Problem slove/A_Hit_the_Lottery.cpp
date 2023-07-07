#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //100
    int ans=n/100;
    int l=n%100;
    //20
    ans+=l/20;
    l=l%20;
    //10
    ans+=l/10;
    l=l%10;
    //5
    ans+=l/5;
    l=l%5;
    //1
    ans+=l/1;
    l=l%1;
    cout<<ans<<endl;
    //ac
    //20*3=60
    //10*1=10
    //1*4=4
    //wr
    //20*3=60
    //5*2=10
    //1*4=4
}