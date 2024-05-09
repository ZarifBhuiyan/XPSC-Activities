#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define For(i, x, y)     for(int i = x; i < y; i++)
#define FFor(i, x, y)    for(int i = x; i <= y; i++)
#define ll               long long
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'

using namespace std;
int main()
{
    start

    int n;
    cin >> n;
    ll a[n];
    For(i, 0, n)
    {
        cin >> a[i];
        if(i > 0)
        {
            a[i] = a[i] + a[i - 1];
        }
    }
    int m;
    cin >> m;
    int b[m];
    For(i, 0, m)
    {
        cin >> b[i];
    }

    vector<pair<int, int>> v;
    v.push_back(make_pair(1, a[0]));
    For(i, 1, n)
    {
        v.push_back(make_pair(a[i - 1] + 1, a[i]));
    }

    For(i, 0, m)
    {
        int val = b[i], l = 0, r = n - 1, m, ans;
        while(l <= r)
        {
            m = (l + r) / 2;
            if(val >= v[m].first and val <= v[m].second)
            {
                ans = m + 1;
                cout << ans << nl;
                break;
            }
            else if(val > v[m].first and val > v[m].second)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }

        }




    }


}
