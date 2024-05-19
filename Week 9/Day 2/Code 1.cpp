#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define For(i, x, y)     for(int i = x; i < y; i++)
#define FFor(i, x, y)    for(int i = x; i <= y; i++)
#define RFor(i, x, y)    for(int i = y; i >= x; i--)
#define ll               long long
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'

using namespace std;
int main()
{
    start

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll cnt_a, cnt_b, cnt, l, ans;
    cnt_a = n / a;
    cnt_b = n / b;
    ans = (p * cnt_a) + (q * cnt_b);
    l = (a * b) / __gcd(a, b);
    cnt = n / l;
    if(p > q)
        ans = ans - (q * cnt);
    else
        ans = ans - (p * cnt);
    cout << ans << nl;


}


