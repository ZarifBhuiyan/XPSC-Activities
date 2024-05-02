#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define ll               long long
#define nl               '\n'
using namespace std;
int main()
{
    start
    test
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n, greater<int>());
        for(int i = 1; i < n; i++)
        {
            a[i] = a[i] + a[i - 1];
        }

        while(q--)
        {
            ll x;
            cin >> x;

            if(x > a[n - 1])
            {
                cout << -1 << nl;
            }

            else
            {
                int l = 0, r = n - 1, m, ans;
                while(l <= r)
                {
                    m = (l + r) / 2;
                    if(a[m] < x)
                    {
                        l = m + 1;
                    }
                    else
                    {
                        ans = m;
                        r = m - 1;
                    }

                }

                cout << ans + 1 << nl;


            }
        }





    }




}
