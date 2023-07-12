#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define pi (3.141592653589)
#define mod 1000000007
// #define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ss second
#define all(c) c.begin(), c.end()
#define f0(i, n) for (int i = 0; i < n; ++i)
#define f1(i, n) for (int i = 1; i < n; ++i)
#define f2(i, n) for (int i = 1; i <= n; ++i)
#define f3(i, n) for (int i = n - 1; i >= 0; i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

/*-----LCM------*/
/*int lcm(int a,int b){
    return a*b/__gcd(a,b);
}*/

/* Prime Number */
/*bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}*/

/*==Sieve of Eratosthenes==*/
/*int prime(long long n){
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}*/
/*int slove(const int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return dp[i];
    }
    return max(slove(i - 1), slove(i - 2) + i * dp[i]);
}*/
long long int dp[1000005] = {0};
long long int dp2[1000005];
/* Main */
int32_t main()
{
    fast

        long long n,
        b;
    cin >> n;
    long long m = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dp[x]++;
    }
    dp2[0] = 0;
    dp2[1] = dp[1];
    for (int i = 2; i <= 100000; i++)
    {
        dp2[i] = max(dp2[i - 1], dp2[i - 2] + i * dp[i]);
    }
    cout << dp2[100000];
    return 0;
}
