#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define ll               long long
#define nl               '\n'
using namespace std;
int main()
{
    start

    ll n, s;
    cin >> n >> s;
    ll a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0, cnt = 0, ans = -1;
    ll sum = 0;
    while( r < n)
    {
        sum = sum + a[r];
        cnt++;
        r++;
        if(sum <= s)
        {
            ans = max(ans, cnt);

        }
        else
        {
            while(sum > s and l < r)
            {
                cnt--;
                sum -= a[l];
                l++;

            }
            ans = max(ans, cnt);

        }

    }


    cout << ans << nl;





}
