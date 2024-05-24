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
    test
    {
        ll a, b;
        int n;
        cin >> a >> b >> n;
        a = a - 1;
        ll sum = b;
        ll x;
        For(i, 0, n)
        {
            cin >> x;
            if(x >= a)
            {
                sum += a;
            }
            else
            {
                sum += x;
            }
        }
        cout << sum << nl;


    }

}
