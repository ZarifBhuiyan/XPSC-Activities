#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define ll               long long
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'

using namespace std;
int main()
{
    start

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(m + 1);
    for(int i = 0; i < m + 1; i++)
    {
        cin >> v[i];
    }
    ll f = v[m], cnt, ans = 0;
    for(int i = 0; i < m; i++)
    {
        cnt = 0;
        for(int j = 0; j <= n; j++)
        {
            if((f >> j & 1) != (v[i] >> j & 1))
            {
                cnt++;
            }
        }

        if(cnt <= k)
        {
            ans++;
        }


    }

    cout << ans << nl;



}
