#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define el "\n";
const int mod = 1e9+7;

void testcase()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    vector<string> vs;
    int flag = 1;
    for(int i=0; i<n; i++)
    {
        string temp="";
        flag = 1;
        for(string s : vs)
            if((s.find(arr[i])!=-1) && (arr[i].size() == s.size()/2))
                flag = 0;

        if(flag){
            temp = arr[i]+arr[i];
            vs.push_back(temp);
        }
    }

    cout << (int)vs.size() << el;

}

int main()
{
    FIO

    int tc=1;
    // cin >> tc;
    while (tc--)
       testcase();
    
}