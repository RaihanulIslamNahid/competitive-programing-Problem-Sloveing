#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    int count=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]== '{}' || s[i]== ',' || s[i]== ' '){
            continue;
        }
        else{
            if(s[i]!=s[i+1]){
                count++;
            }
        }
    }
    cout<<count-1<<endl;
    
}