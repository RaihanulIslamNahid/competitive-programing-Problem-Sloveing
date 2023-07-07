#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define endl cout <<"\n";
#define ld long double
#define ss second
#define all(c) c.begin(), c.end()
#define f2(i, n) for(int i=n-1;i>=0;i--)
#define f0(i,n) for(int i=0;i<n;++i)
#define f1(i,n) for(int i=1;i<=n;++i)
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//isPrime
bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

//GCD
int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}


//main code

int32_t main(){
fast
//int t=1;
//cin>>t;
//while(t--){
    int s,n,count=0;
    cin>>s>>n;
    pair<int,int>pi[1000];
    for(int i=0;i<n;i++){
    	cin>>pi[i].first>>pi[i].second;
    }
    //sort(pi.begin(),pi.end());
    sort(pi,pi+n);
    for(int i=0;i<n;i++){
    	if(s<=pi[i].first){
    		count++;
    		break;
    	}
    	else{
    		s+=pi[i].second;
    	}
    }
    if(count>0){
    	cout<<"NO"<<endl;
    }
    else{
    	cout<<"YES"<<endl;
    }


//}
return 0;
}
