#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define ll               long long
#define nl               '\n'
using namespace std;
int main()
{
    start

    int n, k;
    cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(k--)
    {
       ll v;
       cin >> v;
       int l = 0, r = n - 1, mid;
       int ans = 0;
       while(l <= r)
       {
           mid = (l + r) / 2;
           if(a[mid] == v)
           {
               ans = 1;
               break;
           }
           else if(a[mid] < v)
           {
               l = mid + 1;
           }
           else
           {
               r = mid - 1;
           }
       }
       if(ans)
        cout << "YES" << nl;
       else
        cout << "NO" << nl;




    }

}
