#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define ll               long long
#define nl               '\n'
using namespace std;
int main()
{
    start

    int n, k;
    cin >> n >> k;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(k--)
    {
        ll v;
        cin >> v;

        if(v > a[n-1])
            cout << n + 1  << nl;

        else if( v < a[0])
            cout << 1 << nl;

        else
        {
            int l = 0, r = n - 1, mid;
            int ans = 0;
            while(l <= r)
            {
                mid = (l + r) / 2;
                if(a[mid] == v)
                {
                    ans = mid;
                    r = mid - 1;

                }
                else if(a[mid] < v)
                {
                    l = mid + 1;
                }
                else
                {
                    ans = mid;
                    r = mid - 1;
                }
            }

            cout << ans + 1 << nl;



        }





    }

}
