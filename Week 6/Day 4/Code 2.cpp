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
    test
    {
        ll n, k;
        cin >> n >> k;

        ll seg = k / (n - 1);

        if(k % (n - 1) != 0)
        {
            seg++;
        }

        ll l = (seg - 1) * n + 1;
        ll r = (seg * n) - 1;
        ll m;


        while(l <= r)
        {
            m = (l + r) / 2;
            ll num_of_index = m - seg + 1;
            if(num_of_index == k)
            {
                break;
            }
            else if(num_of_index < k)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }


        }

        cout << m << nl;

    }


}
