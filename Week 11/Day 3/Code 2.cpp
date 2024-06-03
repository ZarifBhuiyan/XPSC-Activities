#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define For(i, x, y)     for(int i = x; i < y; i++)
#define FFor(i, x, y)    for(int i = x; i <= y; i++)
#define RFor(i, x, y)    for(int i = y; i >= x; i--)
#define ll               long long
#define pb               push_back
#define gcd(a,b)         __gcd(a, b)
#define lcm(a,b)         (a * b) / gcd(a, b)
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'
using namespace std;

int main()
{
    start

    int n, q;
    cin >> n >> q;
    ll a[n + 1] = {0};
    FFor(i, 1, n)
    {
        cin >> a[i];
    }
    ll d[n + 2] = {0};
    int l, r;
    while(q--)
    {
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;


    }
    FFor(i, 2, n)
    {
        d[i] = d[i - 1] + d[i];
    }
    sort(a, a + n + 1);
    sort(d, d + n + 1);
    ll sum = 0;
    FFor(i, 1, n)
    {
        sum += a[i] * d[i];
    }

    cout << sum << nl;


}
