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

/*---------Sieve of Eratosthenes--------*/
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

/*------------Main---------------*/
long long a[200005];
int32_t main()
{
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long cnt[2] = {}, sum[2] = {}, ma[2] = {(int)-1e9, (int)-1e9};
        f2(i, n)
        {
            // long long a[20005];
            cin >> a[i];
            if (a[i] >= 0)
                sum[i % 2] += a[i], cnt[i % 2]++;
            ma[i % 2] = max(ma[i % 2], a[i]);
        }
        if (max(ma[0], ma[1]) < 0)
            cout << max(ma[0], ma[1]);
        else
        {
            cout << max(sum[0], sum[1]);
        }
        cout << endl;
    }
    return 0;
}
/*Hey.....
---->Who am I?
-------->No System Is Safe
*/