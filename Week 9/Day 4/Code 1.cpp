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
        string s;
        cin >> s;
        int n = s.size();
        int z = 0, o = 0;
        For(i, 0, n)
        {
            if(s[i] == '0')
                z++;
            else
                o++;
        }
        int l = 0;
        For(i, 0, n)
        {
            if(s[i] == '0')
            {
                if(o >= 1)
                {
                    o--;
                    l++;
                }
                else
                {
                    break;
                }
            }
            else if(s[i] == '1')
            {
                if(z >= 1)
                {
                    z--;
                    l++;
                }
                else
                {
                    break;
                }
            }

        }

        cout << n - l << nl;

    }



}


