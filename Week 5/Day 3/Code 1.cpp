#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin>>t; while(t--)
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define fr(x, y)         for(int i = x; i < y; i++)
#define r_fr(x, y)       for(int i = x - 1; i >= y; i--)
#define ll               long long
#define nl               '\n'
using namespace std;
int main()
{
    start

    int n, m;
    cin >> n;
    int b[n];
    fr(0, n)
    {
        cin >> b[i];
    }
    cin >> m;
    int g[m];
    fr(0, m)
    {
        cin >> g[i];
    }
    sort(b, b + n);
    sort(g, g + m);
    int l = 0, r = 0, cnt = 0;
    int x;
    while(l < n and r < m)
    {
        x = abs(b[l] - g[r]);
        if(x <= 1)
        {
            cnt++;
            l++;
            r++;
        }
        else
        {
            if(b[l] < g[r])
                l++;
            else
                r++;
        }


    }
    cout << cnt << nl;


}
