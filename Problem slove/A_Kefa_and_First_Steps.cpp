#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 
    int count=0,r=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=arr[i-1]){
            count++;
            r=max(r,count);
        }
        else{
            count=1;
        }
    }
    cout<<r<<endl;
}