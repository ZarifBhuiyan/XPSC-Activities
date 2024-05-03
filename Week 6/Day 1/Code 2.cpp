#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define ll               long long
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'
using namespace std;
int main()
{
    start

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    int q;
    cin >> q;
    while(q--)
    {
        ll m;
        cin >> m;
        if(m < a[0])
        {
            cout << 0 << nl;
        }
        else if(m >= a[n - 1])
        {
            cout << n << nl;
        }
        else
        {
            int l = 0, r = n - 1, mid, ans;
            while(l <= r)
            {
                mid = (l + r) / 2;
                if(a[mid] <= m)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }


            }

            cout << ans + 1 << nl;
        }


    }


}
