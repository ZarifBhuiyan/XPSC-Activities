#include <bits/stdc++.h>
#define start            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test             int t; cin >> t; while(t--)
#define ll               long long
#define For(i, x, y)     for(int i = x; i < y; i++)
#define yes              cout << "YES" << '\n';
#define no               cout << "NO" << '\n';
#define nl               '\n'
using namespace std;
int main()
{
    start
    test
    {
        ll n;
        cin >> n;
        int k;
        cin >> k;
        int a[k];
        For(i, 0, k)
        {
            cin >> a[i];
        }

        sort(a, a + k, greater<int>());
        int m, c = 0, cnt = 0;
        For(i, 0, k)
        {
            if(c >= a[i])
            {
                break;
            }
            m = n - a[i];
            c = c + m;
            cnt++;


        }

        cout << cnt << nl;




    }


}
