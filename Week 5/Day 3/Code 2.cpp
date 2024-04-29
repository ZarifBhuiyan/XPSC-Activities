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
    test
    {
        ll a, b, n, s, x, y;
        cin >> a >> b >> n >> s;
        x = s / n;
        if(a >= x)
        {
            y = s % n;
            if(b >= y)
                yes
                else
                    no
                }
        else
        {
            y = s - (a * n);
            if(b >= y)
                yes
                else
                    no

                }




    }
}
