#include<bits/stdc++.h>
using namespace std;
int main(){
    string sa,sb,sc;
    cin>>sa>>sb>>sc;
    string sd=sa+sb;
    sort(sc.begin(),sc.end());
    sort(sd.begin(),sd.end());

    //for(int i=0;i<s.size();i++){
        if(sc==sd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    //}
}