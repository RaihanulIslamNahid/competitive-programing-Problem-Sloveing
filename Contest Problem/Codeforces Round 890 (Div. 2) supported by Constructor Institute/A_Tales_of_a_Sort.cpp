#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
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

/* Main */
int32_t main()
{
   fast 
int t = 1;
    cin >> t;
    for(int j=0;j<t;j++)
    {
       //code
       int n; cin >> n;
		int arr[n + 5], arr1[n + 5];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			arr1[i] = arr[i];
		}
		sort(arr1, arr1 + n);
		int i = n - 1;
		while (arr[i] == arr1[i] && i >= 0) {
			i--;
		}
		if (i < 0) 
        cout << 0 << endl;
		else cout << arr1[i] << endl;
	}
    
    return 0;
}
/*---------- Who Am I ? -----------*/
/*----- No System Is Safe -------*/