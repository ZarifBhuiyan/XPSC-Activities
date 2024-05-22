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
        int n;
        cin >> n;
        ll x[n], sum = 0;
        For(i, 0, n)
        {
            cin >> x[i];
            sum += abs(x[i]);

        }
        int i = 0, j, ans = 0;
        while (i < n)
        {
            if (x[i] < 0)
            {
                int j = i + 1;
                while (j < n && x[j] <= 0)
                {
                    j++;
                }
                ans++;
                i = j;
            }
            else
            {
                i++;
            }
        }

        cout << sum << " " << ans << nl;



    }


}
