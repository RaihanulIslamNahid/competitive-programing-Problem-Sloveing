#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--){
        string s;
        cin>>s;
        
        if(s == "Icosahedron"){
            sum+=20;
        }
        if(s=="Dodecahedron"){
           sum+=12;
        }
        if(s=="Octahedron"){
           sum+=8;
        }
        if(s =="Cube"){
            sum+=6;
        }
        if(s == "Tetrahedron"){
            sum+=4;
        }    
        
    }  
    cout<<sum<<endl;
}