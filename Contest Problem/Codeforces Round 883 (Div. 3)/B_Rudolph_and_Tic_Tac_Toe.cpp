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
    fast int t = 1;
    cin >> t;
    while (t--)
    {
        string s[3];
        cin >> s[0] >> s[1] >> s[2];
        char ans = '.';
        for (int i = 0; i < 4 - 1; i++)
        {
            if (s[i][0] != '.' && s[i][0] == s[i][1] && s[i][1] == s[i][2])
                ans = s[i][0];
            if (s[0][i] != '.' && s[0][i] == s[1][i] && s[1][i] == s[2][i])
                ans = s[0][i];
        }
        if (s[0][0] == s[1][1] && s[1][1] == s[2][2])
            ans = s[0][0];
        if (s[0][2] == s[1][1] && s[1][1] == s[2][0])
            ans = s[1][1];
        if (ans == '.')
            cout << "DRAW" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
