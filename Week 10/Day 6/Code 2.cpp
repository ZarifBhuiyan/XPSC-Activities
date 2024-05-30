#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define For(i, x, y)     for(int i = x; i < y; i++)
#define FFor(i, x, y)    for(int i = x; i <= y; i++)
#define RFor(i, x, y)    for(int i = y; i >= x; i--)
#define ll               long long
#define pb               push_back
#define gcd(a,b)         __gcd(a, b)
#define lcm(a,b)         (a * b) / gcd(a, b)
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'
using namespace std;

int main()
{
    start

    test
    {
        int n;
        cin >> n;
        ll a[n];
        For(i, 0, n)
        {
            cin >> a[i];
        }
        int i = 0, j = 1;
        ll ans = 0;
        while(j < n)
        {
            if(a[i] > 0)
            {
                if(a[j] < 0)
                {
                    a[j] += a[i];
                    a[i] = 0;
                    i++;
                    if(i == j)
                    {
                        j++;
                    }
                }
                else
                {
                    j++;
                }
            }
            else
            {
                i++;
                if(i == j)
                {
                    j++;
                }
            }

        }

        For(i, 0, n)
        {
            if(a[i] < 0)
            {
                ans += abs(a[i]);
            }
        }

        cout << ans << nl;




    }


}
