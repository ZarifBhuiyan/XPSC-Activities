#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define    start              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define    test               int t; cin >> t; while(t--)
#define    For(i, x, y)       for(int i = x; i < y; i++)
#define    FFor(i, x, y)      for(int i = x; i <= y; i++)
#define    RFor(i, x, y)      for(int i = y; i >= x; i--)
#define    ll                 long long
#define    vc                 vector
#define    vc_i               vector <int>
#define    vc_l               vector <ll>
#define    pb                 push_back
#define    gcd(a,b)           __gcd(a, b)
#define    lcm(a,b)           (a * b) / gcd(a, b)
#define    yes                cout << "YES" << '\n';
#define    no                 cout << "NO" << '\n';
#define    nl                 '\n'
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    start

    int n, k;
    cin >> n >> k;
    int a[n];
    For(i, 0, n)
    {
        cin >> a[i];
    }
    pbds<pair<int, int>> p;
    vc_i v;
    int mid;
    if(k & 1)
    {
        mid = k / 2;
    }
    else
    {
        mid = k / 2 - 1;
    }
    For(i, 0, k)
    {
        p.insert({a[i], i});
    }
    pair<int, int> x;
    x = *p.find_by_order(mid);
    v.pb(x.first);
    For(i, 0, n - k)
    {
        p.erase({a[i], i});
        p.insert({a[i + k], i + k});
        x = *p.find_by_order(mid);
        v.pb(x.first);

    }
    for(auto val : v)
    {
        cout << val << " ";
    }
    cout << nl;


}
