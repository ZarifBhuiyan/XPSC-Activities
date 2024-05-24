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
        int a[n];
        For(i, 0, n)
        {
            cin >> a[i];
        }
        bool ans = false;

        For(i, 1, n)
        {
            if(a[i] > a[i - 1] and a[i] > a[i + 1])
            {
                ans = true;
                yes
                cout << i << ' ' << i + 1 << ' ' << i + 2 << nl;
                break;
            }
        }
        if(ans == false)
            no



        }


}
