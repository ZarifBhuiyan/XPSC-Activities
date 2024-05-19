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

bool square(ll v)
{
    ll x = sqrt(v);
    return (x * x == v);
}

int main()
{
    start

    ll x = 1e6;
    vector<bool> v(x + 5, true);
    v[1] = false;
    FFor(i, 2, sqrt(x))
    {
        if(v[i] == true)
        {
            for(int j = 2 * i; j <= x; j += i)
            {
                v[j] = false;
            }

        }

    } // 1 to 10^6 prime numbers using sieve
    int n;
    cin >> n;
    ll y;
    For(i, 0, n)
    {
        cin >> y;

        if(v[sqrt(y)] and square(y))
        {
            yes
        }
        else
        {
            no
        }
    }


}
