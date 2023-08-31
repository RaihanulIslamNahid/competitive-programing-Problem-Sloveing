#include <algorithm>
#include <array>
#include <cassert>
#include <iostream>
#include <vector>
#include<map>
using namespace std;
// define
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ss second
#define all(arr) sort(arr.begin(), arr.end());
#define f2(i, n) for (int i = n - 1; i >= 0; i--)
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i <= n; ++i)
#define fast                                                                   \
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Prime

/*bool isPrime(int n) {
  if (n == 1)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}*/
// GCD
/*int gcd(int a, int b) {
  if (b == 0)
    return a;
  a %= b;
  return gcd(b, a);
}*/

void dbg_out() { cerr << endl; }

#ifdef NEAL_DEBUG
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// run_case
void run_case() {
  // code Here
  int n;
  cin>>n;
  vector<int>vec(n);
  map<int,int>mpi;
  f0(i,n){
    cin>>vec[i];
    mpi[vec[i]]=i;
  }
  int count=0;
  f0(i,n){
    if(vec[i]==1){
        continue;
    }
    if(mpi[vec[i]-1] > mpi[vec[i]]){
        count++;
    }
  }
  cout<<count<<endl;
}
// main
int32_t main() {
  ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
  cin.tie(nullptr);
#endif

  int tests;
  cin >> tests;

  while (tests-- > 0)
    run_case();
}