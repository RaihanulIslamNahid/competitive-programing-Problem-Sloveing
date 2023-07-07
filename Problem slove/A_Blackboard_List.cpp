#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int ans;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);
        if(arr[0]<0){
            ans=arr[0];
        }
        else{
            ans=arr[n-1];
        }
        cout<<ans<<endl;
    }
    
}