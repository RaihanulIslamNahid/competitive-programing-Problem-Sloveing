#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,count,ans;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    count=arr[m-1]-arr[0];
    for(int i=n;i<=m;i++){
        ans=arr[i-1]-arr[i-n];
        ans=abs(ans);
        count=min(count,ans);
    }
    cout<<count<<endl;
    
}