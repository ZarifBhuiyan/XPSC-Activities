#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define ll               long long
#define nl               '\n'
using namespace std;
int main()
{
    start

    int n;
    cin >> n;

    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    test
    {
        ll x, y;
        cin >> x >> y;
        if(x > a[n-1] or y < a[0])
            cout << 0 << " ";
        else
        {
            int l = 0, r = n - 1;
            int ans1, ans2, ans, m;

            while(l <= r)
            {
                m = (l + r) / 2;
                if(a[m] < x)
                {
                    l = m + 1;

                }
                else
                {
                    ans1 = m;
                    r = m - 1;

                }
            }
            // cout << "Ans1 ---> " << ans1 << nl;
            l = 0, r = n - 1;

            while(l <= r)
            {
                m = (l + r) / 2;
                if(a[m] > y)
                {
                    r = m - 1;

                }
                else
                {
                    ans2 = m;
                    l = m + 1;

                }
            }
            //cout << "Ans2 ---> " << ans2 << nl;

            cout << ans2 - ans1 + 1 << " ";

        }




    }




}
