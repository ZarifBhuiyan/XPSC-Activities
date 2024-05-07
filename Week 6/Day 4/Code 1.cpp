#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define For(i, x, y)     for(int i = x; i < y; i++)
#define FFor(i, x, y)    for(int i = x; i <= y; i++)
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
        ll x;
        cin >> x;

        double a, b;
        bool ans = false;
        FFor(i, 1, 1e4)
        {
            if(x - pow(i, 3) <= 0)
            {
                break;
            }
            a = cbrt(x - pow(i, 3));
            int c = a;
            if( (a - c) == 0)
            {
                ans = true;
                break;
            }
        }
        if(ans)
        {
            yes
        }
        else
        {
            no
        }



    }

}
