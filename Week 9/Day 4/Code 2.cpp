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
    int n;
    cin >> n;
    int a = 0, b = 0;
    string s;
    FFor(i, 1, n)
    {
        if(a < 2)
        {
            s += 'a';
            a++;
        }
        else
        {
            s += 'b';
            b++;
            if(b == 2)
            {
                a = 0;
                b = 0;
            }
        }
    }
    cout << s << nl;



}

