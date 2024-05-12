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
        int n;
        cin >> n;
        ll a[n], b[n], max_a = -1, max_b = -1;
        For(i, 0, n)
        {
            cin >> a[i];
            max_a = max(a[i], max_a);
        }
        For(i, 0, n)
        {
            cin >> b[i];
             max_b = max(b[i], max_b);
        }
        if(n == 1)
        {
            if(a[0] < b[0])
            {
                no
            }
            else
            {
                yes
            }
        }
        else
        {
            ll k = max_a - max_b;
            if(k < 0)
            {
                no
            }
            else
            {
                bool ans = true;
                For(i, 0, n)
                {
                    if(b[i] == 0)
                    {
                        if(a[i] > k)
                        {
                            ans = false;
                            break;
                        }
                    }
                    else if(a[i] - b[i] != k)
                    {
                        ans = false;
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

    }



}
