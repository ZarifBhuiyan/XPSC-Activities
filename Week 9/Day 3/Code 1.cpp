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
        int k = 3 * n;
        map<string, int> m;
        vector<string> v(k + 1);
        FFor(i, 1, k)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        int ans = 0;
        FFor(i, 1, k)
        {
            if(m[v[i]] == 1)
                ans += 3;
            else if(m[v[i]] == 2)
                ans += 1;

            if(i % n == 0)
            {
                cout << ans << " ";
                ans = 0;
            }


        }
        cout << nl;

    }


}
