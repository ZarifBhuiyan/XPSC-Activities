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

    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    FFor(i, 1, sqrt(n))
    {
        if(n % i == 0)
        {
            v.push_back(i);

            if(n / i != i)
            {
                v.push_back(n / i);
            }

        }
    }
    ll l = v.size();
    sort(v.begin(), v.end());
    if(k > l)
    {
        cout << - 1 << nl;
    }
    else
    {
        cout << v[k - 1] << nl;
    }




}
