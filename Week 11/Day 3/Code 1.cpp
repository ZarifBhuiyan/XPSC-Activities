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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(n - k == 1)
        {
            yes
        }
        else
        {
            map<char, int> m;
            For(i, 0, n)
            {
                m[s[i]]++;
            }
            int single = 0;
            for(auto [x, y] : m)
            {
                single += y % 2;
            }
            if(single < k)
            {
                yes
            }
            else
            {
                single = single - k;
                if(single == 1 or single == 0)
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
