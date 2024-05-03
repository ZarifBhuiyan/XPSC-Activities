#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define ll               long long
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'
using namespace std;
int main()
{
    start

    int n;
    ll s;
    cin >> n >> s;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0, ans = 1e5, cnt = 0;
    ll sum = 0;
    while(r < n)
    {
        sum += a[r];
        cnt++;
        r++;
        if(sum >= s)
        {
            while(sum >= s and l < r)
            {
                ans = min(ans, cnt);
                sum -= a[l];
                l++;
                cnt--;

            }
        }


    }

    if(ans == 1e5)
        cout << -1 << nl;
    else
        cout << ans << nl;


}
