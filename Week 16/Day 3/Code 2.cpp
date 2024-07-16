#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define    start              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define    test               int t; cin >> t; while(t--)
#define    For(i, x, y)       for(int i = x; i < y; i++)
#define    FFor(i, x, y)      for(int i = x; i <= y; i++)
#define    RFor(i, x, y)      for(int i = x; i >= y; i--)
#define    ll                 long long
#define    pb                 push_back
#define    F                  first
#define    S                  second
#define    gcd(a, b)           __gcd(a, b)
#define    lcm(a, b)           (a * b) / gcd(a, b)
#define    yes                cout << "YES" << '\n';
#define    no                 cout << "NO" << '\n';
#define    nl                 '\n'
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    start

    test
    {
        int n;
        cin >> n;
        vector<pair<ll, ll>> v ;
        ll x, y;
        For(i, 0, n)
        {
            cin >> x >> y;
            v.pb({x, y});
        }

        sort(v.begin(), v.end(), greater<pair<ll, ll>>());

        pbds<ll> p;
        ll ans = 0;
        for(auto val : v)
        {
            ans += p.order_of_key(val.S);
            p.insert(val.S);
        }

        cout << ans << nl;
    }

    return 0;
}
