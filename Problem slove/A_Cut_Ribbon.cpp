#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
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

/* Main */
int32_t main()
{
    fast

        int n,
        a, b, c;
    cin >> n >> a >> b >> c;
    int dp[n + 1];
    dp[0] = 0;
    f2(i, n)
    {
        int x = INT_MIN;
        int y = INT_MIN;
        int z = INT_MIN;
        if (i >= a)
        {
            x = dp[i - a];
        }
        if (i >= b)
        {
            y = dp[i - b];
        }
        if (i >= c)
        {
            z = dp[i - c];
        }
        dp[i] = 1 + max(max(x, y), z);
    }
    cout << dp[n];

    return 0;
}
