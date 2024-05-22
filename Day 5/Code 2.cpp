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
        ll a, b;
        cin >> a >> b;
        ll ab = a * b;
        if(a == ab)
        {
            no
        }
        else
        {
            ll x, y, z;
            if(ab / a == 2)
            {

                z = 2 * ab;
                x = a;
                y = ((z / a) - 1) * a;
            }
            else
            {
                z = ab;
                x = a;
                y = ((z / a) - 1) * a;

            }

            yes
            cout << x << " " << y << " " << z << nl;

        }



    }



}
