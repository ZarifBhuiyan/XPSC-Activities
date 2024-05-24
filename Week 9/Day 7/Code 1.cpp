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
        int n, q;
        cin >> n >> q;
        vector<ll> v(n);
        vector<ll> p(n);
        For(i, 0, n)
        {
            cin >> v[i];
        }
        p[0] = v[0];
        For(i, 1, n)
        {
            p[i] = max(v[i], p[i - 1]);
            v[i] = v[i] + v[i - 1];

        }
        while(q--)
        {
            ll k;
            cin >> k;
            int indx = upper_bound(p.begin(), p.end(), k) - p.begin();
            if(indx == 0)
                cout << 0 << " ";
            else
                cout << v[indx - 1] << " ";



        }
        cout << nl;
    }


}
