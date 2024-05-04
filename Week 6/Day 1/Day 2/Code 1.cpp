#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define ll               long long
#define For(i, x, y)     for(int i = x; i < y; i++)
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'
using namespace std;
int main()
{
    start

    int n;
    ll t;
    cin >> n >> t;
    ll a[n];
    For(i, 0, n)
    {
        cin >> a[i];
    }

    //Making a function which gives total product at mid time.

    auto product = [&](ll mid)
    {
        ll total_product = 0;
        For(i, 0, n)
        {
            total_product = total_product + (mid / a[i]);

            if(total_product >= t)
                return true;

        }


        return false;
    };


    ll l = 1, r = 1e18, mid, ans;

    while(l <= r)
    {
        mid = (l + r) / 2;
        if(product(mid))
        {
            ans = mid;
            r = mid - 1;

        }
        else
        {
            l = mid + 1;

        }


    }


    cout << ans << nl;


}
